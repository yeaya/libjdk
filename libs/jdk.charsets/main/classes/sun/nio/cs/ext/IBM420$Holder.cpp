#include <sun/nio/cs/ext/IBM420$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM420.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM420 = ::sun::nio::cs::ext::IBM420;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM420$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM420$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM420$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM420$Holder::*)()>(&IBM420$Holder::init$))},
	{}
};

$InnerClassInfo _IBM420$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM420$Holder", "sun.nio.cs.ext.IBM420", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM420$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM420$Holder",
	"java.lang.Object",
	nullptr,
	_IBM420$Holder_FieldInfo_,
	_IBM420$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM420$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM420"
};

$Object* allocate$IBM420$Holder($Class* clazz) {
	return $of($alloc(IBM420$Holder));
}

$String* IBM420$Holder::b2cTable = nullptr;
$chars* IBM420$Holder::b2c = nullptr;
$chars* IBM420$Holder::c2b = nullptr;
$chars* IBM420$Holder::c2bIndex = nullptr;

void IBM420$Holder::init$() {
}

void clinit$IBM420$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM420$Holder::b2cTable, $cstr({0x634, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xFEB7, 0x635, 0xFEBB, 0x636, 0xFEBF, 0x637, 0x638, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x639, 0xFECA, 0xFECB, 0xFECC, 0x63A, 0xFECE, 0xFECF, 0xF7, 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xFED0, 0x641, 0xFED3, 0x642, 0xFED7, 0x643, 0xFEDB, 0x644, 0xFEF5, 0xFEF6, 0xFEF7, 0xFEF8, 0xFFFD, 0xFFFD, 0xFEFB, 0xFEFC, 0xFEDF, 0x645, 0xFEE3, 0x646, 0xFEE7, 0x647, 0x61B, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xAD, 0xFEEB, 0xFFFD, 0xFEEC, 0xFFFD, 0x648, 0x61F, 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0x649, 0xFEF0, 0x64A, 0xFEF2, 0xFEF3, 0x660, 0xD7, 0xFFFD, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0x661, 0x662, 0xFFFD, 0x663, 0x664, 0x665, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xFFFD, 0x666, 0x667, 0x668, 0x669, 0x9F, '\0', 0x1, 0x2, 0x3, 0x9C, '\t', 0x86, 0x7F, 0x97, 0x8D, 0x8E, 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x9D, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8F, 0x1C, 0x1D, 0x1E, 0x1F, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1B, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x5, 0x6, 0x7, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x4, 0x98, 0x99, 0x9A, 0x9B, 0x14, 0x15, 0x9E, 0x1A, ' ', 0xA0, 0x651, 0xFE7D, 0x640, 0x200B, 0x621, 0x622, 0xFE82, 0x623, 0xA2, '.', '<', '(', '+', '|', '&', 0xFE84, 0x624, 0xFFFD, 0xFFFD, 0x626, 0x627, 0xFE8E, 0x628, 0xFE91, '!', '$', '*', ')', ';', 0xAC, '-', '/', 0x629, 0x62A, 0xFE97, 0x62B, 0xFE9B, 0x62C, 0xFE9F, 0x62D, 0xA6, ',', '%', '_', '>', '?', 0xFEA3, 0x62E, 0xFEA7, 0x62F, 0x630, 0x631, 0x632, 0x633, 0xFEB3, 0x60C, ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM420$Holder::b2c, $nc(IBM420$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM420$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM420$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM420$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, $nc(IBM420$Holder::b2cTable)->toCharArray());
		b2cMap->set(165, (char16_t)0xFFFD);
		$assign(c2bNR, (u"\u0015\u0085B\ufe7cF\ufe80G\ufe81I\ufe83K\u066cK\uff0eL\uff1cM\uff08N\uff0bO\uff5cP\uff06R\ufe85R\ufe86U\ufe89U\ufe8aU\ufe8bU\ufe8cV\u0625V\ufe87V\ufe8dW\ufe88X\ufe8fX\ufe90Y\ufe92Z\uff01[\uff04\\\u066d\\\uff0a]\uff09^\uff1b`\uff0da\uff0fb\ufe93b\ufe94c\ufe95c\ufe96d\ufe98e\ufe99e\ufe9af\ufe9cg\ufe9dg\ufe9eh\ufea0i\ufea1i\ufea2k\u066bk\uff0cl\u066al\uff05m\uff3fn\uff1eo\uff1fp\ufea4q\ufea5q\ufea6r\ufea8s\ufea9s\ufeaat\ufeabt\ufeacu\ufeadu\ufeaev\ufeafv\ufeb0w\ufeb1w\ufeb2x\ufeb4z\uff1a{\uff03|\uff20}\uff07~\uff1d\u007f\uff02\u0080\ufeb5\u0080\ufeb6\u0081\uff41\u0082\uff42\u0083\uff43\u0084\uff44\u0085\uff45\u0086\uff46\u0087\uff47\u0088\uff48\u0089\uff49\u008a\ufeb8\u008b\ufeb9\u008b\ufeba\u008c\ufebc\u008d\ufebd\u008d\ufebe\u008e\ufec0\u008f\ufec1\u008f\ufec2\u008f\ufec3\u008f\ufec4\u0090\ufec5\u0090\ufec6\u0090\ufec7\u0090\ufec8\u0091\uff4a\u0092\uff4b\u0093\uff4c\u0094\uff4d\u0095\uff4e\u0096\uff4f\u0097\uff50\u0098\uff51\u0099\uff52\u009a\ufec9\u009e\ufecd\u00a2\uff53\u00a3\uff54\u00a4\uff55\u00a5\uff56\u00a6\uff57\u00a7\uff58\u00a8\uff59\u00a9\uff5a\u00ab\ufed1\u00ab\ufed2\u00ac\ufed4\u00ad\ufed5\u00ad\ufed6\u00ae\ufed8\u00af\ufed9\u00af\ufeda\u00b0\ufedc\u00b1\ufedd\u00b1\ufede\u00b8\ufef9\u00b9\ufefa\u00ba\ufee0\u00bb\ufee1\u00bb\ufee2\u00bc\ufee4\u00bd\ufee5\u00bd\ufee6\u00be\ufee8\u00bf\ufee9\u00bf\ufeea\u00c1\uff21\u00c2\uff22\u00c3\uff23\u00c4\uff24\u00c5\uff25\u00c6\uff26\u00c7\uff27\u00c8\uff28\u00c9\uff29\u00cf\ufeed\u00cf\ufeee\u00d1\uff2a\u00d2\uff2b\u00d3\uff2c\u00d4\uff2d\u00d5\uff2e\u00d6\uff2f\u00d7\uff30\u00d8\uff31\u00d9\uff32\u00da\ufeef\u00dc\ufef1\u00de\ufef4\u00e2\uff33\u00e3\uff34\u00e4\uff35\u00e5\uff36\u00e6\uff37\u00e7\uff38\u00e8\uff39\u00e9\uff3a\u00f0\uff10\u00f1\uff11\u00f2\uff12\u00f3\uff13\u00f4\uff14\u00f5\uff15\u00f6\uff16\u00f7\uff17\u00f8\uff18\u00f9\uff19"_s)->toCharArray());
		$SingleByte::initC2B(b2cMap, c2bNR, IBM420$Holder::c2b, IBM420$Holder::c2bIndex);
	}
}

IBM420$Holder::IBM420$Holder() {
}

$Class* IBM420$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM420$Holder, name, initialize, &_IBM420$Holder_ClassInfo_, clinit$IBM420$Holder, allocate$IBM420$Holder);
	return class$;
}

$Class* IBM420$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun