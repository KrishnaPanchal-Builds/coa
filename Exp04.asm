    ORG 10H
    MOV AX, CS
    MOV DS, AX

    MOV AL, 35H
    AND AL, 5AH
    MOV BL, AL

    MOV AL, 35H
    OR  AL, 5AH
    MOV CL, AL

    MOV AL, 35H
    XOR AL, 5AH
    MOV DL, AL

    MOV AL, 35H
    NOT AL
    MOV DH, AL

    MOV AH, 4CH
    INT 21H

END
