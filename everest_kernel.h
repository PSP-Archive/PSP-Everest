#ifndef ___KPSPIDENT_H___
#define ___KPSPIDENT_H___

u32 sceSysconGetBaryonVersion(u32 *baryon);// 0x7EC5A957
u32 sceSysconGetPommelVersion(u32 *pommel);// 0xE7E87741
u32 sceSysregGetTachyonVersion(void);// 0xE2A5D1EE
u64 sceSysregGetFuseId(void);// 0x4F46EEDE
u32 sceSysregGetFuseConfig(void);// 0x8F4F4E96
u32 pspGetKirkVersion(void);
u32 pspGetSpockVersion(void);
u32 pspNandGetScramble(void);
int GetRegion(void);
char *GetInitialFW(void);
int pspNandGetPageSize(void);
int pspNandGetTotalBlocks(void);
int pspNandGetPagesPerBlock(void);
u8 *GetMACAddress(u8 *buf);
int ReadSerial(u16 *pdata);
int WriteSerial(u16* serial);

#endif
