#include <sun/nio/cs/ext/IBM868$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM868.h>
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

$String* IBM868$Holder::b2cTable = nullptr;
$chars* IBM868$Holder::b2c = nullptr;
$chars* IBM868$Holder::c2b = nullptr;
$chars* IBM868$Holder::c2bIndex = nullptr;

void IBM868$Holder::init$() {
}

void IBM868$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM868$Holder::b2cTable, $cstr({0x06f0, 0x06f1, 0x06f2, 0x06f3, 0x06f4, 0x06f5, 0x06f6, 0x06f7, 0x06f8, 0x06f9, 0x060c, 0x061b, 0x061f, 0xfe81, 0xfe8d, 0xfe8e, 0xf8fb, 0xfe8f, 0xfe91, 0xfb56, 0xfb58, 0xfe93, 0xfe95, 0xfe97, 0xfb66, 0xfb68, 0xfe99, 0xfe9b, 0xfe9d, 0xfe9f, 0xfb7a, 0xfb7c, 0xfea1, 0xfea3, 0xfea5, 0xfea7, 0xfea9, 0xfb88, 0xfeab, 0xfead, 0xfb8c, 0xfeaf, 0xfb8a, 0xfeb1, 0xfeb3, 0xfeb5, 0xab, 0xbb, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0xfeb7, 0xfeb9, 0xfebb, 0xfebd, 0x2563, 0x2551, 0x2557, 0x255d, 0xfebf, 0xfec3, 0x2510, 0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0xfec7, 0xfec9, 0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0xfeca, 0xfecb, 0xfecc, 0xfecd, 0xfece, 0xfecf, 0xfed0, 0xfed1, 0xfed3, 0xfed5, 0x2518, 0x250c, 0x2588, 0x2584, 0xfed7, 0xfb8e, 0x2580, 0xfedb, 0xfb92, 0xfb94, 0xfedd, 0xfedf, 0xfee0, 0xfee1, 0xfee3, 0xfb9e, 0xfee5, 0xfee7, 0xfe85, 0xfeed, 0xfba6, 0xfba8, 0xfba9, 0xad, 0xfbaa, 0xfe80, 0xfe89, 0xfe8a, 0xfe8b, 0xfbfc, 0xfbfd, 0xfbfe, 0xfbb0, 0xfbae, 0xfe7c, 0xfe7d, 0xfffd, 0x25a0, 0xa0, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(IBM868$Holder::b2c, IBM868$Holder::b2cTable->toCharArray());
	$assignStatic(IBM868$Holder::c2b, $new($chars, 1792));
	$assignStatic(IBM868$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM868$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM868$Holder::c2b, IBM868$Holder::c2bIndex);
	}
}

IBM868$Holder::IBM868$Holder() {
}

$Class* IBM868$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM868$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM868$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM868$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM868$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM868$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM868$Holder", "sun.nio.cs.ext.IBM868", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM868$Holder",
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
		"sun.nio.cs.ext.IBM868"
	};
	$loadClass(IBM868$Holder, name, initialize, &classInfo$$, IBM868$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM868$Holder);
	});
	return class$;
}

$Class* IBM868$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun