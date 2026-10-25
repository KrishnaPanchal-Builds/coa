.MODEL SMALL
.DATA
SRC DB 11H,22H,33H,44H,55H   ; source block
DST DB 5 DUP(0)              ; destination block
.CODE
MAIN:
    MOV AX,@DATA
    MOV DS,AX                ; initialize DS
    MOV ES,AX                ; initialize ES (ES = DS)
    LEA SI,SRC               ; SI -> source block
    LEA DI,DST               ; DI -> destination block
    MOV CX,05H               ; number of bytes to transfer
    CLD                      ; DF = 0 (auto-increment SI, DI)
    REP MOVSB                ; copy CX bytes from DS:SI to ES:DI
    MOV AH,4CH
    INT 21H                  ; exit to DOS
END MAIN
