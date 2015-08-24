
typedef struct
{
    char VbeSignature[4];    /* "VESA" */
    int  VbeVersion;         /* bcd */
    char far *OemStringPtr;  /* asciiz */
    long Capabilities;       /* of video,
                                bitmapped */
    int  far *VideoModePtr;  /* array of
                                mode
                                numbers */
    int  TotalMemory; /* video memory/64kb */
    
    /* vbe 2.0+ */

    int  OemSoftwareRev;         /* bcd */
    char far *OemVendorNamePtr;  /* asciiz */
    char far *OemProductNamePtr; /* asciiz */
    char far *OemProductRevPtr;  /* asciiz */
    char Reserved[222];     /* used by vbe */
    char OemData[256];      /* used by vbe */
    
} VbeInfo_t;