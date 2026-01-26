#include <jdk/nio/zipfs/ZipConstants.h>

#include <jcpp.h>

#undef CENATT
#undef CENATX
#undef CENATX_PERMS
#undef CENCOM
#undef CENCRC
#undef CENDSK
#undef CENEXT
#undef CENFLG
#undef CENHDR
#undef CENHOW
#undef CENLEN
#undef CENNAM
#undef CENOFF
#undef CENSIG
#undef CENSIZ
#undef CENTIM
#undef CENVEM
#undef CENVEM_FA
#undef CENVER
#undef CH
#undef ENDCOM
#undef ENDHDR
#undef ENDOFF
#undef ENDSIG
#undef ENDSIZ
#undef ENDSUB
#undef ENDTOT
#undef END_MAXLEN
#undef EXTCRC
#undef EXTHDR
#undef EXTID_EFS
#undef EXTID_EXTT
#undef EXTID_NTFS
#undef EXTID_UNIX
#undef EXTID_ZIP64
#undef EXTLEN
#undef EXTSIG
#undef EXTSIZ
#undef FILE_ATTRIBUTES_UNIX
#undef FLAG_DATADESCR
#undef FLAG_ENCRYPTED
#undef FLAG_USE_UTF8
#undef LG
#undef LL
#undef LOCCRC
#undef LOCEXT
#undef LOCFLG
#undef LOCHDR
#undef LOCHOW
#undef LOCLEN
#undef LOCNAM
#undef LOCSIG
#undef LOCSIZ
#undef LOCTIM
#undef LOCVER
#undef METHOD_AES
#undef METHOD_BZIP2
#undef METHOD_DEFLATED
#undef METHOD_DEFLATED64
#undef METHOD_LZ77
#undef METHOD_LZMA
#undef METHOD_STORED
#undef READBLOCKSZ
#undef SH
#undef VERSION_MADE_BY_BASE_UNIX
#undef ZIP64_ENDDSK
#undef ZIP64_ENDEXT
#undef ZIP64_ENDHDR
#undef ZIP64_ENDLEN
#undef ZIP64_ENDNMD
#undef ZIP64_ENDOFF
#undef ZIP64_ENDSIG
#undef ZIP64_ENDSIZ
#undef ZIP64_ENDTOD
#undef ZIP64_ENDTOT
#undef ZIP64_ENDVEM
#undef ZIP64_ENDVER
#undef ZIP64_EXTCRC
#undef ZIP64_EXTHDR
#undef ZIP64_EXTID
#undef ZIP64_EXTLEN
#undef ZIP64_EXTSIZ
#undef ZIP64_LOCDSK
#undef ZIP64_LOCHDR
#undef ZIP64_LOCOFF
#undef ZIP64_LOCSIG
#undef ZIP64_LOCTOT
#undef ZIP64_MINVAL

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipConstants_FieldInfo_[] = {
	{"METHOD_STORED", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, METHOD_STORED)},
	{"METHOD_DEFLATED", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, METHOD_DEFLATED)},
	{"METHOD_DEFLATED64", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, METHOD_DEFLATED64)},
	{"METHOD_BZIP2", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, METHOD_BZIP2)},
	{"METHOD_LZMA", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, METHOD_LZMA)},
	{"METHOD_LZ77", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, METHOD_LZ77)},
	{"METHOD_AES", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, METHOD_AES)},
	{"FLAG_ENCRYPTED", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, FLAG_ENCRYPTED)},
	{"FLAG_DATADESCR", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, FLAG_DATADESCR)},
	{"FLAG_USE_UTF8", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, FLAG_USE_UTF8)},
	{"LOCSIG", "J", nullptr, $STATIC, $staticField(ZipConstants, LOCSIG$)},
	{"EXTSIG", "J", nullptr, $STATIC, $staticField(ZipConstants, EXTSIG)},
	{"CENSIG", "J", nullptr, $STATIC, $staticField(ZipConstants, CENSIG$)},
	{"ENDSIG", "J", nullptr, $STATIC, $staticField(ZipConstants, ENDSIG)},
	{"LOCHDR", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, LOCHDR)},
	{"EXTHDR", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, EXTHDR)},
	{"CENHDR", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENHDR)},
	{"ENDHDR", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ENDHDR)},
	{"FILE_ATTRIBUTES_UNIX", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, FILE_ATTRIBUTES_UNIX)},
	{"VERSION_MADE_BY_BASE_UNIX", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, VERSION_MADE_BY_BASE_UNIX)},
	{"LOCVER", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, LOCVER$)},
	{"LOCFLG", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, LOCFLG$)},
	{"LOCHOW", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, LOCHOW$)},
	{"LOCTIM", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, LOCTIM$)},
	{"LOCCRC", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, LOCCRC$)},
	{"LOCSIZ", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, LOCSIZ$)},
	{"LOCLEN", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, LOCLEN$)},
	{"LOCNAM", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, LOCNAM$)},
	{"LOCEXT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, LOCEXT$)},
	{"EXTCRC", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, EXTCRC$)},
	{"EXTSIZ", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, EXTSIZ$)},
	{"EXTLEN", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, EXTLEN$)},
	{"CENVEM", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENVEM$)},
	{"CENVER", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENVER$)},
	{"CENFLG", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENFLG$)},
	{"CENHOW", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENHOW$)},
	{"CENTIM", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENTIM$)},
	{"CENCRC", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENCRC$)},
	{"CENSIZ", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENSIZ$)},
	{"CENLEN", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENLEN$)},
	{"CENNAM", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENNAM$)},
	{"CENEXT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENEXT$)},
	{"CENCOM", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENCOM$)},
	{"CENDSK", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENDSK$)},
	{"CENATT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENATT$)},
	{"CENATX", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENATX$)},
	{"CENOFF", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, CENOFF$)},
	{"ENDSUB", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ENDSUB$)},
	{"ENDTOT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ENDTOT$)},
	{"ENDSIZ", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ENDSIZ$)},
	{"ENDOFF", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ENDOFF$)},
	{"ENDCOM", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ENDCOM$)},
	{"ZIP64_ENDSIG", "J", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDSIG)},
	{"ZIP64_LOCSIG", "J", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_LOCSIG)},
	{"ZIP64_ENDHDR", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDHDR)},
	{"ZIP64_LOCHDR", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_LOCHDR)},
	{"ZIP64_EXTHDR", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_EXTHDR)},
	{"ZIP64_EXTID", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_EXTID)},
	{"ZIP64_MINVAL32", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_MINVAL32)},
	{"ZIP64_MINVAL", "J", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_MINVAL)},
	{"ZIP64_ENDLEN", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDLEN)},
	{"ZIP64_ENDVEM", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDVEM)},
	{"ZIP64_ENDVER", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDVER)},
	{"ZIP64_ENDNMD", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDNMD)},
	{"ZIP64_ENDDSK", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDDSK)},
	{"ZIP64_ENDTOD", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDTOD$)},
	{"ZIP64_ENDTOT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDTOT$)},
	{"ZIP64_ENDSIZ", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDSIZ$)},
	{"ZIP64_ENDOFF", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDOFF$)},
	{"ZIP64_ENDEXT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_ENDEXT)},
	{"ZIP64_LOCDSK", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_LOCDSK)},
	{"ZIP64_LOCOFF", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_LOCOFF$)},
	{"ZIP64_LOCTOT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_LOCTOT)},
	{"ZIP64_EXTCRC", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_EXTCRC)},
	{"ZIP64_EXTSIZ", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_EXTSIZ)},
	{"ZIP64_EXTLEN", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, ZIP64_EXTLEN)},
	{"EXTID_ZIP64", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, EXTID_ZIP64)},
	{"EXTID_NTFS", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, EXTID_NTFS)},
	{"EXTID_UNIX", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, EXTID_UNIX)},
	{"EXTID_EFS", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, EXTID_EFS)},
	{"EXTID_EXTT", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, EXTID_EXTT)},
	{"END_MAXLEN", "J", nullptr, $STATIC | $FINAL, $constField(ZipConstants, END_MAXLEN)},
	{"READBLOCKSZ", "I", nullptr, $STATIC | $FINAL, $constField(ZipConstants, READBLOCKSZ)},
	{}
};

$MethodInfo _ZipConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ZipConstants, init$, void)},
	{"CENATT", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENATT, int32_t, $bytes*, int32_t)},
	{"CENATX", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENATX, int64_t, $bytes*, int32_t)},
	{"CENATX_PERMS", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENATX_PERMS, int32_t, $bytes*, int32_t)},
	{"CENCOM", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENCOM, int32_t, $bytes*, int32_t)},
	{"CENCRC", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENCRC, int64_t, $bytes*, int32_t)},
	{"CENDSK", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENDSK, int32_t, $bytes*, int32_t)},
	{"CENEXT", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENEXT, int32_t, $bytes*, int32_t)},
	{"CENFLG", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENFLG, int32_t, $bytes*, int32_t)},
	{"CENHOW", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENHOW, int32_t, $bytes*, int32_t)},
	{"CENLEN", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENLEN, int64_t, $bytes*, int32_t)},
	{"CENNAM", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENNAM, int32_t, $bytes*, int32_t)},
	{"CENOFF", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENOFF, int64_t, $bytes*, int32_t)},
	{"CENSIG", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENSIG, int64_t, $bytes*, int32_t)},
	{"CENSIZ", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENSIZ, int64_t, $bytes*, int32_t)},
	{"CENTIM", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENTIM, int64_t, $bytes*, int32_t)},
	{"CENVEM", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENVEM, int32_t, $bytes*, int32_t)},
	{"CENVEM_FA", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENVEM_FA, int32_t, $bytes*, int32_t)},
	{"CENVER", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CENVER, int32_t, $bytes*, int32_t)},
	{"CH", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, CH, int32_t, $bytes*, int32_t)},
	{"ENDCOM", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, ENDCOM, int32_t, $bytes*)},
	{"ENDCOM", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, ENDCOM, int32_t, $bytes*, int32_t)},
	{"ENDOFF", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, ENDOFF, int64_t, $bytes*)},
	{"ENDSIZ", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, ENDSIZ, int64_t, $bytes*)},
	{"ENDSUB", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, ENDSUB, int32_t, $bytes*)},
	{"ENDTOT", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, ENDTOT, int32_t, $bytes*)},
	{"EXTCRC", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, EXTCRC, int64_t, $bytes*)},
	{"EXTLEN", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, EXTLEN, int64_t, $bytes*)},
	{"EXTSIZ", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, EXTSIZ, int64_t, $bytes*)},
	{"LG", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LG, int64_t, $bytes*, int32_t)},
	{"LL", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LL, int64_t, $bytes*, int32_t)},
	{"LOCCRC", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LOCCRC, int64_t, $bytes*)},
	{"LOCEXT", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LOCEXT, int32_t, $bytes*)},
	{"LOCFLG", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LOCFLG, int32_t, $bytes*)},
	{"LOCHOW", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LOCHOW, int32_t, $bytes*)},
	{"LOCLEN", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LOCLEN, int64_t, $bytes*)},
	{"LOCNAM", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LOCNAM, int32_t, $bytes*)},
	{"LOCSIG", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LOCSIG, int64_t, $bytes*)},
	{"LOCSIZ", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LOCSIZ, int64_t, $bytes*)},
	{"LOCTIM", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LOCTIM, int64_t, $bytes*)},
	{"LOCVER", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, LOCVER, int32_t, $bytes*)},
	{"SH", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, SH, int32_t, $bytes*, int32_t)},
	{"ZIP64_ENDOFF", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, ZIP64_ENDOFF, int64_t, $bytes*)},
	{"ZIP64_ENDSIZ", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, ZIP64_ENDSIZ, int64_t, $bytes*)},
	{"ZIP64_ENDTOD", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, ZIP64_ENDTOD, int64_t, $bytes*)},
	{"ZIP64_ENDTOT", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, ZIP64_ENDTOT, int64_t, $bytes*)},
	{"ZIP64_LOCOFF", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipConstants, ZIP64_LOCOFF, int64_t, $bytes*)},
	{"cenSigAt", "([BI)Z", nullptr, $STATIC, $staticMethod(ZipConstants, cenSigAt, bool, $bytes*, int32_t)},
	{"end64SigAt", "([BI)Z", nullptr, $STATIC, $staticMethod(ZipConstants, end64SigAt, bool, $bytes*, int32_t)},
	{"endSigAt", "([BI)Z", nullptr, $STATIC, $staticMethod(ZipConstants, endSigAt, bool, $bytes*, int32_t)},
	{"extSigAt", "([BI)Z", nullptr, $STATIC, $staticMethod(ZipConstants, extSigAt, bool, $bytes*, int32_t)},
	{"getSig", "([BI)J", nullptr, $STATIC, $staticMethod(ZipConstants, getSig, int64_t, $bytes*, int32_t)},
	{"locSigAt", "([BI)Z", nullptr, $STATIC, $staticMethod(ZipConstants, locSigAt, bool, $bytes*, int32_t)},
	{"locator64SigAt", "([BI)Z", nullptr, $STATIC, $staticMethod(ZipConstants, locator64SigAt, bool, $bytes*, int32_t)},
	{"pkSigAt", "([BIII)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(ZipConstants, pkSigAt, bool, $bytes*, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _ZipConstants_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipConstants",
	"java.lang.Object",
	nullptr,
	_ZipConstants_FieldInfo_,
	_ZipConstants_MethodInfo_
};

$Object* allocate$ZipConstants($Class* clazz) {
	return $of($alloc(ZipConstants));
}

int64_t ZipConstants::LOCSIG$ = 0;
int64_t ZipConstants::EXTSIG = 0;
int64_t ZipConstants::CENSIG$ = 0;
int64_t ZipConstants::ENDSIG = 0;

void ZipConstants::init$() {
}

int32_t ZipConstants::CH($bytes* b, int32_t n) {
	$init(ZipConstants);
	return $Byte::toUnsignedInt($nc(b)->get(n));
}

int32_t ZipConstants::SH($bytes* b, int32_t n) {
	$init(ZipConstants);
	int32_t var$0 = $Byte::toUnsignedInt($nc(b)->get(n));
	return var$0 | ($Byte::toUnsignedInt($nc(b)->get(n + 1)) << 8);
}

int64_t ZipConstants::LG($bytes* b, int32_t n) {
	$init(ZipConstants);
	int32_t var$0 = (SH(b, n));
	return (int64_t)((var$0 | (SH(b, n + 2) << 16)) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
}

int64_t ZipConstants::LL($bytes* b, int32_t n) {
	$init(ZipConstants);
	int64_t var$0 = (LG(b, n));
	return var$0 | (LG(b, n + 4) << 32);
}

int64_t ZipConstants::getSig($bytes* b, int32_t n) {
	$init(ZipConstants);
	return LG(b, n);
}

bool ZipConstants::pkSigAt($bytes* b, int32_t n, int32_t b1, int32_t b2) {
	$init(ZipConstants);
	return ((($nc(b)->get(n) == u'P') & (b->get(n + 1) == u'K')) & (b->get(n + 2) == b1)) & (b->get(n + 3) == b2);
}

bool ZipConstants::cenSigAt($bytes* b, int32_t n) {
	$init(ZipConstants);
	return pkSigAt(b, n, 1, 2);
}

bool ZipConstants::locSigAt($bytes* b, int32_t n) {
	$init(ZipConstants);
	return pkSigAt(b, n, 3, 4);
}

bool ZipConstants::endSigAt($bytes* b, int32_t n) {
	$init(ZipConstants);
	return pkSigAt(b, n, 5, 6);
}

bool ZipConstants::extSigAt($bytes* b, int32_t n) {
	$init(ZipConstants);
	return pkSigAt(b, n, 7, 8);
}

bool ZipConstants::end64SigAt($bytes* b, int32_t n) {
	$init(ZipConstants);
	return pkSigAt(b, n, 6, 6);
}

bool ZipConstants::locator64SigAt($bytes* b, int32_t n) {
	$init(ZipConstants);
	return pkSigAt(b, n, 6, 7);
}

int64_t ZipConstants::LOCSIG($bytes* b) {
	$init(ZipConstants);
	return LG(b, 0);
}

int32_t ZipConstants::LOCVER($bytes* b) {
	$init(ZipConstants);
	return SH(b, 4);
}

int32_t ZipConstants::LOCFLG($bytes* b) {
	$init(ZipConstants);
	return SH(b, 6);
}

int32_t ZipConstants::LOCHOW($bytes* b) {
	$init(ZipConstants);
	return SH(b, 8);
}

int64_t ZipConstants::LOCTIM($bytes* b) {
	$init(ZipConstants);
	return LG(b, 10);
}

int64_t ZipConstants::LOCCRC($bytes* b) {
	$init(ZipConstants);
	return LG(b, 14);
}

int64_t ZipConstants::LOCSIZ($bytes* b) {
	$init(ZipConstants);
	return LG(b, 18);
}

int64_t ZipConstants::LOCLEN($bytes* b) {
	$init(ZipConstants);
	return LG(b, 22);
}

int32_t ZipConstants::LOCNAM($bytes* b) {
	$init(ZipConstants);
	return SH(b, 26);
}

int32_t ZipConstants::LOCEXT($bytes* b) {
	$init(ZipConstants);
	return SH(b, 28);
}

int64_t ZipConstants::EXTCRC($bytes* b) {
	$init(ZipConstants);
	return LG(b, 4);
}

int64_t ZipConstants::EXTSIZ($bytes* b) {
	$init(ZipConstants);
	return LG(b, 8);
}

int64_t ZipConstants::EXTLEN($bytes* b) {
	$init(ZipConstants);
	return LG(b, 12);
}

int32_t ZipConstants::ENDSUB($bytes* b) {
	$init(ZipConstants);
	return SH(b, 8);
}

int32_t ZipConstants::ENDTOT($bytes* b) {
	$init(ZipConstants);
	return SH(b, 10);
}

int64_t ZipConstants::ENDSIZ($bytes* b) {
	$init(ZipConstants);
	return LG(b, 12);
}

int64_t ZipConstants::ENDOFF($bytes* b) {
	$init(ZipConstants);
	return LG(b, 16);
}

int32_t ZipConstants::ENDCOM($bytes* b) {
	$init(ZipConstants);
	return SH(b, 20);
}

int32_t ZipConstants::ENDCOM($bytes* b, int32_t off) {
	$init(ZipConstants);
	return SH(b, off + 20);
}

int64_t ZipConstants::ZIP64_ENDTOD($bytes* b) {
	$init(ZipConstants);
	return LL(b, 24);
}

int64_t ZipConstants::ZIP64_ENDTOT($bytes* b) {
	$init(ZipConstants);
	return LL(b, 32);
}

int64_t ZipConstants::ZIP64_ENDSIZ($bytes* b) {
	$init(ZipConstants);
	return LL(b, 40);
}

int64_t ZipConstants::ZIP64_ENDOFF($bytes* b) {
	$init(ZipConstants);
	return LL(b, 48);
}

int64_t ZipConstants::ZIP64_LOCOFF($bytes* b) {
	$init(ZipConstants);
	return LL(b, 8);
}

int64_t ZipConstants::CENSIG($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return LG(b, pos + 0);
}

int32_t ZipConstants::CENVEM($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return SH(b, pos + 4);
}

int32_t ZipConstants::CENVEM_FA($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return CH(b, pos + 5);
}

int32_t ZipConstants::CENVER($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return SH(b, pos + 6);
}

int32_t ZipConstants::CENFLG($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return SH(b, pos + 8);
}

int32_t ZipConstants::CENHOW($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return SH(b, pos + 10);
}

int64_t ZipConstants::CENTIM($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return LG(b, pos + 12);
}

int64_t ZipConstants::CENCRC($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return LG(b, pos + 16);
}

int64_t ZipConstants::CENSIZ($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return LG(b, pos + 20);
}

int64_t ZipConstants::CENLEN($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return LG(b, pos + 24);
}

int32_t ZipConstants::CENNAM($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return SH(b, pos + 28);
}

int32_t ZipConstants::CENEXT($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return SH(b, pos + 30);
}

int32_t ZipConstants::CENCOM($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return SH(b, pos + 32);
}

int32_t ZipConstants::CENDSK($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return SH(b, pos + 34);
}

int32_t ZipConstants::CENATT($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return SH(b, pos + 36);
}

int64_t ZipConstants::CENATX($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return LG(b, pos + 38);
}

int32_t ZipConstants::CENATX_PERMS($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return SH(b, pos + 40);
}

int64_t ZipConstants::CENOFF($bytes* b, int32_t pos) {
	$init(ZipConstants);
	return LG(b, pos + 42);
}

void clinit$ZipConstants($Class* class$) {
	ZipConstants::LOCSIG$ = 67324752;
	ZipConstants::EXTSIG = 134695760;
	ZipConstants::CENSIG$ = 33639248;
	ZipConstants::ENDSIG = 101010256;
}

ZipConstants::ZipConstants() {
}

$Class* ZipConstants::load$($String* name, bool initialize) {
	$loadClass(ZipConstants, name, initialize, &_ZipConstants_ClassInfo_, clinit$ZipConstants, allocate$ZipConstants);
	return class$;
}

$Class* ZipConstants::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk