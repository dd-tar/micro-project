macro lengthRoot p1x, p1y, p2x, p2y{ ; stores in eax the square root of length
      mov ebx, [p1x]
      sub ebx, [p2x]  ; ebx = p1x - p2x
      mov edx, [p1y]
      sub edx, [p2y]  ; edx = p1y - p2y
      mov [l1], ebx   ; l1 = ebx
      mov [l2], edx   ; l2 = edx

      push [l1]
      call abs
      mov [l1], eax   ; l1 = abs(l1)

      push [l2]
      call abs
      mov [l2], eax   ; l2 = abs(l2)

      push [l1]
      push [l1]
      call mult
      mov [temp], eax
      push [l2]
      push [l2]
      call mult
      add [temp], eax ; temp = l1 * l1 + l2 * l2
      mov eax, [temp] ; eax = temp
}