; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: llc < %s -mtriple=x86_64-unknown-unknown | FileCheck %s
; PR3253

; The register+memory form of the BT instruction should be usable on
; pentium4, however it is currently disabled due to the register+memory
; form having different semantics than the register+register form.

; Test these patterns:
;    (X & (1 << N))  != 0  -->  BT(X, N).
;    ((X >>u N) & 1) != 0  -->  BT(X, N).
; as well as several variations:
;    - The second form can use an arithmetic shift.
;    - Either form can use == instead of !=.
;    - Either form can compare with an operand of the &
;      instead of with 0.
;    - The comparison can be commuted (only cases where neither
;      operand is constant are included).
;    - The and can be commuted.

define void @test2(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: test2:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB0_2
;
entry:
  %tmp29 = lshr i32 %x, %n
  %tmp3 = and i32 %tmp29, 1
  %tmp4 = icmp eq i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @test2b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: test2b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB1_2
;
entry:
  %tmp29 = lshr i32 %x, %n
  %tmp3 = and i32 1, %tmp29
  %tmp4 = icmp eq i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @atest2(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: atest2:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB2_2
;
entry:
  %tmp29 = ashr i32 %x, %n
  %tmp3 = and i32 %tmp29, 1
  %tmp4 = icmp eq i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @atest2b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: atest2b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB3_2
;
entry:
  %tmp29 = ashr i32 %x, %n
  %tmp3 = and i32 1, %tmp29
  %tmp4 = icmp eq i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @test3(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: test3:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB4_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %tmp29, %x
  %tmp4 = icmp eq i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @test3b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: test3b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB5_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %x, %tmp29
  %tmp4 = icmp eq i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @testne2(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: testne2:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB6_2
;
entry:
  %tmp29 = lshr i32 %x, %n
  %tmp3 = and i32 %tmp29, 1
  %tmp4 = icmp ne i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @testne2b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: testne2b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB7_2
;
entry:
  %tmp29 = lshr i32 %x, %n
  %tmp3 = and i32 1, %tmp29
  %tmp4 = icmp ne i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @atestne2(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: atestne2:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB8_2
;
entry:
  %tmp29 = ashr i32 %x, %n
  %tmp3 = and i32 %tmp29, 1
  %tmp4 = icmp ne i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @atestne2b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: atestne2b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB9_2
;
entry:
  %tmp29 = ashr i32 %x, %n
  %tmp3 = and i32 1, %tmp29
  %tmp4 = icmp ne i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @testne3(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: testne3:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB10_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %tmp29, %x
  %tmp4 = icmp ne i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @testne3b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: testne3b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB11_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %x, %tmp29
  %tmp4 = icmp ne i32 %tmp3, 0
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @query2(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: query2:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB12_2
;
entry:
  %tmp29 = lshr i32 %x, %n
  %tmp3 = and i32 %tmp29, 1
  %tmp4 = icmp eq i32 %tmp3, 1
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @query2b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: query2b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB13_2
;
entry:
  %tmp29 = lshr i32 %x, %n
  %tmp3 = and i32 1, %tmp29
  %tmp4 = icmp eq i32 %tmp3, 1
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @aquery2(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: aquery2:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB14_2
;
entry:
  %tmp29 = ashr i32 %x, %n
  %tmp3 = and i32 %tmp29, 1
  %tmp4 = icmp eq i32 %tmp3, 1
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @aquery2b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: aquery2b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB15_2
;
entry:
  %tmp29 = ashr i32 %x, %n
  %tmp3 = and i32 1, %tmp29
  %tmp4 = icmp eq i32 %tmp3, 1
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @query3(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: query3:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB16_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %tmp29, %x
  %tmp4 = icmp eq i32 %tmp3, %tmp29
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @query3b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: query3b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB17_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %x, %tmp29
  %tmp4 = icmp eq i32 %tmp3, %tmp29
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @query3x(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: query3x:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB18_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %tmp29, %x
  %tmp4 = icmp eq i32 %tmp29, %tmp3
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @query3bx(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: query3bx:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jae .LBB19_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %x, %tmp29
  %tmp4 = icmp eq i32 %tmp29, %tmp3
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @queryne2(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: queryne2:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB20_2
;
entry:
  %tmp29 = lshr i32 %x, %n
  %tmp3 = and i32 %tmp29, 1
  %tmp4 = icmp ne i32 %tmp3, 1
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @queryne2b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: queryne2b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB21_2
;
entry:
  %tmp29 = lshr i32 %x, %n
  %tmp3 = and i32 1, %tmp29
  %tmp4 = icmp ne i32 %tmp3, 1
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @aqueryne2(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: aqueryne2:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB22_2
;
entry:
  %tmp29 = ashr i32 %x, %n
  %tmp3 = and i32 %tmp29, 1
  %tmp4 = icmp ne i32 %tmp3, 1
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @aqueryne2b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: aqueryne2b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB23_2
;
entry:
  %tmp29 = ashr i32 %x, %n
  %tmp3 = and i32 1, %tmp29
  %tmp4 = icmp ne i32 %tmp3, 1
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @queryne3(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: queryne3:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB24_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %tmp29, %x
  %tmp4 = icmp ne i32 %tmp3, %tmp29
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @queryne3b(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: queryne3b:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB25_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %x, %tmp29
  %tmp4 = icmp ne i32 %tmp3, %tmp29
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @queryne3x(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: queryne3x:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB26_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %tmp29, %x
  %tmp4 = icmp ne i32 %tmp29, %tmp3
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

define void @queryne3bx(i32 %x, i32 %n) nounwind {
; CHECK-LABEL: queryne3bx:
; CHECK:       # BB#0: # %entry
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    jb .LBB27_2
;
entry:
  %tmp29 = shl i32 1, %n
  %tmp3 = and i32 %x, %tmp29
  %tmp4 = icmp ne i32 %tmp29, %tmp3
  br i1 %tmp4, label %bb, label %UnifiedReturnBlock

bb:
  call void @foo()
  ret void

UnifiedReturnBlock:
  ret void
}

declare void @foo()

define zeroext i1 @invert(i32 %flags, i32 %flag) nounwind {
; CHECK-LABEL: invert:
; CHECK:       # BB#0:
; CHECK-NEXT:    notl %edi
; CHECK-NEXT:    btl %esi, %edi
; CHECK-NEXT:    setb %al
; CHECK-NEXT:    retq
;
  %neg = xor i32 %flags, -1
  %shl = shl i32 1, %flag
  %and = and i32 %shl, %neg
  %tobool = icmp ne i32 %and, 0
  ret i1 %tobool
}
