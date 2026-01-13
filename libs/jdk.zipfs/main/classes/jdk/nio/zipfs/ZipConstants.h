#ifndef _jdk_nio_zipfs_ZipConstants_h_
#define _jdk_nio_zipfs_ZipConstants_h_
//$ class jdk.nio.zipfs.ZipConstants
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CENATT")
#undef CENATT
#pragma push_macro("CENATX")
#undef CENATX
#pragma push_macro("CENATX_PERMS")
#undef CENATX_PERMS
#pragma push_macro("CENCOM")
#undef CENCOM
#pragma push_macro("CENCRC")
#undef CENCRC
#pragma push_macro("CENDSK")
#undef CENDSK
#pragma push_macro("CENEXT")
#undef CENEXT
#pragma push_macro("CENFLG")
#undef CENFLG
#pragma push_macro("CENHDR")
#undef CENHDR
#pragma push_macro("CENHOW")
#undef CENHOW
#pragma push_macro("CENLEN")
#undef CENLEN
#pragma push_macro("CENNAM")
#undef CENNAM
#pragma push_macro("CENOFF")
#undef CENOFF
#pragma push_macro("CENSIG")
#undef CENSIG
#pragma push_macro("CENSIZ")
#undef CENSIZ
#pragma push_macro("CENTIM")
#undef CENTIM
#pragma push_macro("CENVEM")
#undef CENVEM
#pragma push_macro("CENVEM_FA")
#undef CENVEM_FA
#pragma push_macro("CENVER")
#undef CENVER
#pragma push_macro("CH")
#undef CH
#pragma push_macro("ENDCOM")
#undef ENDCOM
#pragma push_macro("ENDHDR")
#undef ENDHDR
#pragma push_macro("ENDOFF")
#undef ENDOFF
#pragma push_macro("ENDSIG")
#undef ENDSIG
#pragma push_macro("ENDSIZ")
#undef ENDSIZ
#pragma push_macro("ENDSUB")
#undef ENDSUB
#pragma push_macro("ENDTOT")
#undef ENDTOT
#pragma push_macro("END_MAXLEN")
#undef END_MAXLEN
#pragma push_macro("EXTCRC")
#undef EXTCRC
#pragma push_macro("EXTHDR")
#undef EXTHDR
#pragma push_macro("EXTID_EFS")
#undef EXTID_EFS
#pragma push_macro("EXTID_EXTT")
#undef EXTID_EXTT
#pragma push_macro("EXTID_NTFS")
#undef EXTID_NTFS
#pragma push_macro("EXTID_UNIX")
#undef EXTID_UNIX
#pragma push_macro("EXTID_ZIP64")
#undef EXTID_ZIP64
#pragma push_macro("EXTLEN")
#undef EXTLEN
#pragma push_macro("EXTSIG")
#undef EXTSIG
#pragma push_macro("EXTSIZ")
#undef EXTSIZ
#pragma push_macro("FILE_ATTRIBUTES_UNIX")
#undef FILE_ATTRIBUTES_UNIX
#pragma push_macro("FLAG_DATADESCR")
#undef FLAG_DATADESCR
#pragma push_macro("FLAG_ENCRYPTED")
#undef FLAG_ENCRYPTED
#pragma push_macro("FLAG_USE_UTF8")
#undef FLAG_USE_UTF8
#pragma push_macro("LG")
#undef LG
#pragma push_macro("LL")
#undef LL
#pragma push_macro("LOCCRC")
#undef LOCCRC
#pragma push_macro("LOCEXT")
#undef LOCEXT
#pragma push_macro("LOCFLG")
#undef LOCFLG
#pragma push_macro("LOCHDR")
#undef LOCHDR
#pragma push_macro("LOCHOW")
#undef LOCHOW
#pragma push_macro("LOCLEN")
#undef LOCLEN
#pragma push_macro("LOCNAM")
#undef LOCNAM
#pragma push_macro("LOCSIG")
#undef LOCSIG
#pragma push_macro("LOCSIZ")
#undef LOCSIZ
#pragma push_macro("LOCTIM")
#undef LOCTIM
#pragma push_macro("LOCVER")
#undef LOCVER
#pragma push_macro("METHOD_AES")
#undef METHOD_AES
#pragma push_macro("METHOD_BZIP2")
#undef METHOD_BZIP2
#pragma push_macro("METHOD_DEFLATED")
#undef METHOD_DEFLATED
#pragma push_macro("METHOD_DEFLATED64")
#undef METHOD_DEFLATED64
#pragma push_macro("METHOD_LZ77")
#undef METHOD_LZ77
#pragma push_macro("METHOD_LZMA")
#undef METHOD_LZMA
#pragma push_macro("METHOD_STORED")
#undef METHOD_STORED
#pragma push_macro("READBLOCKSZ")
#undef READBLOCKSZ
#pragma push_macro("SH")
#undef SH
#pragma push_macro("VERSION_MADE_BY_BASE_UNIX")
#undef VERSION_MADE_BY_BASE_UNIX
#pragma push_macro("ZIP64_ENDDSK")
#undef ZIP64_ENDDSK
#pragma push_macro("ZIP64_ENDEXT")
#undef ZIP64_ENDEXT
#pragma push_macro("ZIP64_ENDHDR")
#undef ZIP64_ENDHDR
#pragma push_macro("ZIP64_ENDLEN")
#undef ZIP64_ENDLEN
#pragma push_macro("ZIP64_ENDNMD")
#undef ZIP64_ENDNMD
#pragma push_macro("ZIP64_ENDOFF")
#undef ZIP64_ENDOFF
#pragma push_macro("ZIP64_ENDSIG")
#undef ZIP64_ENDSIG
#pragma push_macro("ZIP64_ENDSIZ")
#undef ZIP64_ENDSIZ
#pragma push_macro("ZIP64_ENDTOD")
#undef ZIP64_ENDTOD
#pragma push_macro("ZIP64_ENDTOT")
#undef ZIP64_ENDTOT
#pragma push_macro("ZIP64_ENDVEM")
#undef ZIP64_ENDVEM
#pragma push_macro("ZIP64_ENDVER")
#undef ZIP64_ENDVER
#pragma push_macro("ZIP64_EXTCRC")
#undef ZIP64_EXTCRC
#pragma push_macro("ZIP64_EXTHDR")
#undef ZIP64_EXTHDR
#pragma push_macro("ZIP64_EXTID")
#undef ZIP64_EXTID
#pragma push_macro("ZIP64_EXTLEN")
#undef ZIP64_EXTLEN
#pragma push_macro("ZIP64_EXTSIZ")
#undef ZIP64_EXTSIZ
#pragma push_macro("ZIP64_LOCDSK")
#undef ZIP64_LOCDSK
#pragma push_macro("ZIP64_LOCHDR")
#undef ZIP64_LOCHDR
#pragma push_macro("ZIP64_LOCOFF")
#undef ZIP64_LOCOFF
#pragma push_macro("ZIP64_LOCSIG")
#undef ZIP64_LOCSIG
#pragma push_macro("ZIP64_LOCTOT")
#undef ZIP64_LOCTOT
#pragma push_macro("ZIP64_MINVAL")
#undef ZIP64_MINVAL

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipConstants : public ::java::lang::Object {
	$class(ZipConstants, 0, ::java::lang::Object)
public:
	ZipConstants();
	void init$();
	static int32_t CENATT($bytes* b, int32_t pos);
	static int64_t CENATX($bytes* b, int32_t pos);
	static int32_t CENATX_PERMS($bytes* b, int32_t pos);
	static int32_t CENCOM($bytes* b, int32_t pos);
	static int64_t CENCRC($bytes* b, int32_t pos);
	static int32_t CENDSK($bytes* b, int32_t pos);
	static int32_t CENEXT($bytes* b, int32_t pos);
	static int32_t CENFLG($bytes* b, int32_t pos);
	static int32_t CENHOW($bytes* b, int32_t pos);
	static int64_t CENLEN($bytes* b, int32_t pos);
	static int32_t CENNAM($bytes* b, int32_t pos);
	static int64_t CENOFF($bytes* b, int32_t pos);
	static int64_t CENSIG($bytes* b, int32_t pos);
	static int64_t CENSIZ($bytes* b, int32_t pos);
	static int64_t CENTIM($bytes* b, int32_t pos);
	static int32_t CENVEM($bytes* b, int32_t pos);
	static int32_t CENVEM_FA($bytes* b, int32_t pos);
	static int32_t CENVER($bytes* b, int32_t pos);
	static int32_t CH($bytes* b, int32_t n);
	static int32_t ENDCOM($bytes* b);
	static int32_t ENDCOM($bytes* b, int32_t off);
	static int64_t ENDOFF($bytes* b);
	static int64_t ENDSIZ($bytes* b);
	static int32_t ENDSUB($bytes* b);
	static int32_t ENDTOT($bytes* b);
	static int64_t EXTCRC($bytes* b);
	static int64_t EXTLEN($bytes* b);
	static int64_t EXTSIZ($bytes* b);
	static int64_t LG($bytes* b, int32_t n);
	static int64_t LL($bytes* b, int32_t n);
	static int64_t LOCCRC($bytes* b);
	static int32_t LOCEXT($bytes* b);
	static int32_t LOCFLG($bytes* b);
	static int32_t LOCHOW($bytes* b);
	static int64_t LOCLEN($bytes* b);
	static int32_t LOCNAM($bytes* b);
	static int64_t LOCSIG($bytes* b);
	static int64_t LOCSIZ($bytes* b);
	static int64_t LOCTIM($bytes* b);
	static int32_t LOCVER($bytes* b);
	static int32_t SH($bytes* b, int32_t n);
	static int64_t ZIP64_ENDOFF($bytes* b);
	static int64_t ZIP64_ENDSIZ($bytes* b);
	static int64_t ZIP64_ENDTOD($bytes* b);
	static int64_t ZIP64_ENDTOT($bytes* b);
	static int64_t ZIP64_LOCOFF($bytes* b);
	static bool cenSigAt($bytes* b, int32_t n);
	static bool end64SigAt($bytes* b, int32_t n);
	static bool endSigAt($bytes* b, int32_t n);
	static bool extSigAt($bytes* b, int32_t n);
	static int64_t getSig($bytes* b, int32_t n);
	static bool locSigAt($bytes* b, int32_t n);
	static bool locator64SigAt($bytes* b, int32_t n);
	static bool pkSigAt($bytes* b, int32_t n, int32_t b1, int32_t b2);
	static const int32_t METHOD_STORED = 0;
	static const int32_t METHOD_DEFLATED = 8;
	static const int32_t METHOD_DEFLATED64 = 9;
	static const int32_t METHOD_BZIP2 = 12;
	static const int32_t METHOD_LZMA = 14;
	static const int32_t METHOD_LZ77 = 19;
	static const int32_t METHOD_AES = 99;
	static const int32_t FLAG_ENCRYPTED = 1;
	static const int32_t FLAG_DATADESCR = 8;
	static const int32_t FLAG_USE_UTF8 = 2048;
	static int64_t LOCSIG$;
	static int64_t EXTSIG;
	static int64_t CENSIG$;
	static int64_t ENDSIG;
	static const int32_t LOCHDR = 30;
	static const int32_t EXTHDR = 16;
	static const int32_t CENHDR = 46;
	static const int32_t ENDHDR = 22;
	static const int32_t FILE_ATTRIBUTES_UNIX = 3;
	static const int32_t VERSION_MADE_BY_BASE_UNIX = 768; // FILE_ATTRIBUTES_UNIX << 8
	static const int32_t LOCVER$ = 4;
	static const int32_t LOCFLG$ = 6;
	static const int32_t LOCHOW$ = 8;
	static const int32_t LOCTIM$ = 10;
	static const int32_t LOCCRC$ = 14;
	static const int32_t LOCSIZ$ = 18;
	static const int32_t LOCLEN$ = 22;
	static const int32_t LOCNAM$ = 26;
	static const int32_t LOCEXT$ = 28;
	static const int32_t EXTCRC$ = 4;
	static const int32_t EXTSIZ$ = 8;
	static const int32_t EXTLEN$ = 12;
	static const int32_t CENVEM$ = 4;
	static const int32_t CENVER$ = 6;
	static const int32_t CENFLG$ = 8;
	static const int32_t CENHOW$ = 10;
	static const int32_t CENTIM$ = 12;
	static const int32_t CENCRC$ = 16;
	static const int32_t CENSIZ$ = 20;
	static const int32_t CENLEN$ = 24;
	static const int32_t CENNAM$ = 28;
	static const int32_t CENEXT$ = 30;
	static const int32_t CENCOM$ = 32;
	static const int32_t CENDSK$ = 34;
	static const int32_t CENATT$ = 36;
	static const int32_t CENATX$ = 38;
	static const int32_t CENOFF$ = 42;
	static const int32_t ENDSUB$ = 8;
	static const int32_t ENDTOT$ = 10;
	static const int32_t ENDSIZ$ = 12;
	static const int32_t ENDOFF$ = 16;
	static const int32_t ENDCOM$ = 20;
	static const int64_t ZIP64_ENDSIG = (int64_t)101075792;
	static const int64_t ZIP64_LOCSIG = (int64_t)117853008;
	static const int32_t ZIP64_ENDHDR = 56;
	static const int32_t ZIP64_LOCHDR = 20;
	static const int32_t ZIP64_EXTHDR = 24;
	static const int32_t ZIP64_EXTID = 1;
	static const int32_t ZIP64_MINVAL32 = 0x0000FFFF;
	static const int64_t ZIP64_MINVAL = (int64_t)0x00000000FFFFFFFF;
	static const int32_t ZIP64_ENDLEN = 4;
	static const int32_t ZIP64_ENDVEM = 12;
	static const int32_t ZIP64_ENDVER = 14;
	static const int32_t ZIP64_ENDNMD = 16;
	static const int32_t ZIP64_ENDDSK = 20;
	static const int32_t ZIP64_ENDTOD$ = 24;
	static const int32_t ZIP64_ENDTOT$ = 32;
	static const int32_t ZIP64_ENDSIZ$ = 40;
	static const int32_t ZIP64_ENDOFF$ = 48;
	static const int32_t ZIP64_ENDEXT = 56;
	static const int32_t ZIP64_LOCDSK = 4;
	static const int32_t ZIP64_LOCOFF$ = 8;
	static const int32_t ZIP64_LOCTOT = 16;
	static const int32_t ZIP64_EXTCRC = 4;
	static const int32_t ZIP64_EXTSIZ = 8;
	static const int32_t ZIP64_EXTLEN = 16;
	static const int32_t EXTID_ZIP64 = 1;
	static const int32_t EXTID_NTFS = 10;
	static const int32_t EXTID_UNIX = 13;
	static const int32_t EXTID_EFS = 23;
	static const int32_t EXTID_EXTT = 21589;
	static const int64_t END_MAXLEN = 65557; // 65535 + ENDHDR
	static const int32_t READBLOCKSZ = 128;
};

		} // zipfs
	} // nio
} // jdk

#pragma pop_macro("CENATT")
#pragma pop_macro("CENATX")
#pragma pop_macro("CENATX_PERMS")
#pragma pop_macro("CENCOM")
#pragma pop_macro("CENCRC")
#pragma pop_macro("CENDSK")
#pragma pop_macro("CENEXT")
#pragma pop_macro("CENFLG")
#pragma pop_macro("CENHDR")
#pragma pop_macro("CENHOW")
#pragma pop_macro("CENLEN")
#pragma pop_macro("CENNAM")
#pragma pop_macro("CENOFF")
#pragma pop_macro("CENSIG")
#pragma pop_macro("CENSIZ")
#pragma pop_macro("CENTIM")
#pragma pop_macro("CENVEM")
#pragma pop_macro("CENVEM_FA")
#pragma pop_macro("CENVER")
#pragma pop_macro("CH")
#pragma pop_macro("ENDCOM")
#pragma pop_macro("ENDHDR")
#pragma pop_macro("ENDOFF")
#pragma pop_macro("ENDSIG")
#pragma pop_macro("ENDSIZ")
#pragma pop_macro("ENDSUB")
#pragma pop_macro("ENDTOT")
#pragma pop_macro("END_MAXLEN")
#pragma pop_macro("EXTCRC")
#pragma pop_macro("EXTHDR")
#pragma pop_macro("EXTID_EFS")
#pragma pop_macro("EXTID_EXTT")
#pragma pop_macro("EXTID_NTFS")
#pragma pop_macro("EXTID_UNIX")
#pragma pop_macro("EXTID_ZIP64")
#pragma pop_macro("EXTLEN")
#pragma pop_macro("EXTSIG")
#pragma pop_macro("EXTSIZ")
#pragma pop_macro("FILE_ATTRIBUTES_UNIX")
#pragma pop_macro("FLAG_DATADESCR")
#pragma pop_macro("FLAG_ENCRYPTED")
#pragma pop_macro("FLAG_USE_UTF8")
#pragma pop_macro("LG")
#pragma pop_macro("LL")
#pragma pop_macro("LOCCRC")
#pragma pop_macro("LOCEXT")
#pragma pop_macro("LOCFLG")
#pragma pop_macro("LOCHDR")
#pragma pop_macro("LOCHOW")
#pragma pop_macro("LOCLEN")
#pragma pop_macro("LOCNAM")
#pragma pop_macro("LOCSIG")
#pragma pop_macro("LOCSIZ")
#pragma pop_macro("LOCTIM")
#pragma pop_macro("LOCVER")
#pragma pop_macro("METHOD_AES")
#pragma pop_macro("METHOD_BZIP2")
#pragma pop_macro("METHOD_DEFLATED")
#pragma pop_macro("METHOD_DEFLATED64")
#pragma pop_macro("METHOD_LZ77")
#pragma pop_macro("METHOD_LZMA")
#pragma pop_macro("METHOD_STORED")
#pragma pop_macro("READBLOCKSZ")
#pragma pop_macro("SH")
#pragma pop_macro("VERSION_MADE_BY_BASE_UNIX")
#pragma pop_macro("ZIP64_ENDDSK")
#pragma pop_macro("ZIP64_ENDEXT")
#pragma pop_macro("ZIP64_ENDHDR")
#pragma pop_macro("ZIP64_ENDLEN")
#pragma pop_macro("ZIP64_ENDNMD")
#pragma pop_macro("ZIP64_ENDOFF")
#pragma pop_macro("ZIP64_ENDSIG")
#pragma pop_macro("ZIP64_ENDSIZ")
#pragma pop_macro("ZIP64_ENDTOD")
#pragma pop_macro("ZIP64_ENDTOT")
#pragma pop_macro("ZIP64_ENDVEM")
#pragma pop_macro("ZIP64_ENDVER")
#pragma pop_macro("ZIP64_EXTCRC")
#pragma pop_macro("ZIP64_EXTHDR")
#pragma pop_macro("ZIP64_EXTID")
#pragma pop_macro("ZIP64_EXTLEN")
#pragma pop_macro("ZIP64_EXTSIZ")
#pragma pop_macro("ZIP64_LOCDSK")
#pragma pop_macro("ZIP64_LOCHDR")
#pragma pop_macro("ZIP64_LOCOFF")
#pragma pop_macro("ZIP64_LOCSIG")
#pragma pop_macro("ZIP64_LOCTOT")
#pragma pop_macro("ZIP64_MINVAL")

#endif // _jdk_nio_zipfs_ZipConstants_h_