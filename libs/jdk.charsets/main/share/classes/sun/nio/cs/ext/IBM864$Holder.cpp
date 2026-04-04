#include <sun/nio/cs/ext/IBM864$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM864.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$String* IBM864$Holder::b2cTable = nullptr;
$chars* IBM864$Holder::b2c = nullptr;
$chars* IBM864$Holder::c2b = nullptr;
$chars* IBM864$Holder::c2bIndex = nullptr;

void IBM864$Holder::init$() {
}

void IBM864$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM864$Holder::b2cTable, $cstr({0xb0, 0xb7, 0x2219, 0x221a, 0x2592, 0x2500, 0x2502, 0x253c, 0x2524, 0x252c, 0x251c, 0x2534, 0x2510, 0x250c, 0x2514, 0x2518, 0x03b2, 0x221e, 0x03c6, 0xb1, 0xbd, 0xbc, 0x2248, 0xab, 0xbb, 0xfef7, 0xfef8, 0xfffd, 0xfffd, 0xfefb, 0xfefc, 0xfffd, 0xa0, 0xad, 0xfe82, 0xa3, 0xa4, 0xfe84, 0xfffd, 0xfffd, 0xfe8e, 0xfe8f, 0xfe95, 0xfe99, 0x060c, 0xfe9d, 0xfea1, 0xfea5, 0x0660, 0x0661, 0x0662, 0x0663, 0x0664, 0x0665, 0x0666, 0x0667, 0x0668, 0x0669, 0xfed1, 0x061b, 0xfeb1, 0xfeb5, 0xfeb9, 0x061f, 0xa2, 0xfe80, 0xfe81, 0xfe83, 0xfe85, 0xfeca, 0xfe8b, 0xfe8d, 0xfe91, 0xfe93, 0xfe97, 0xfe9b, 0xfe9f, 0xfea3, 0xfea7, 0xfea9, 0xfeab, 0xfead, 0xfeaf, 0xfeb3, 0xfeb7, 0xfebb, 0xfebf, 0xfec1, 0xfec5, 0xfecb, 0xfecf, 0xa6, 0xac, 0xf7, 0xd7, 0xfec9, 0x0640, 0xfed3, 0xfed7, 0xfedb, 0xfedf, 0xfee3, 0xfee7, 0xfeeb, 0xfeed, 0xfeef, 0xfef3, 0xfebd, 0xfecc, 0xfece, 0xfecd, 0xfee1, 0xfe7d, 0x0651, 0xfee5, 0xfee9, 0xfeec, 0xfef0, 0xfef2, 0xfed0, 0xfed5, 0xfef5, 0xfef6, 0xfedd, 0xfed9, 0xfef1, 0x25a0, 0xfffd, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', 0x066a, '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(IBM864$Holder::b2c, IBM864$Holder::b2cTable->toCharArray());
	$assignStatic(IBM864$Holder::c2b, $new($chars, 1792));
	$assignStatic(IBM864$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM864$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM864$Holder::c2b, IBM864$Holder::c2bIndex);
	}
}

IBM864$Holder::IBM864$Holder() {
}

$Class* IBM864$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM864$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM864$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM864$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM864$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM864$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM864$Holder", "sun.nio.cs.ext.IBM864", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM864$Holder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.IBM864"
	};
	$loadClass(IBM864$Holder, name, initialize, &classInfo$$, IBM864$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM864$Holder);
	});
	return class$;
}

$Class* IBM864$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun