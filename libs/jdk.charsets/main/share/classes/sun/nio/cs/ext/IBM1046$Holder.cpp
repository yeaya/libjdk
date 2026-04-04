#include <sun/nio/cs/ext/IBM1046$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1046.h>
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

$String* IBM1046$Holder::b2cTable = nullptr;
$chars* IBM1046$Holder::b2c = nullptr;
$chars* IBM1046$Holder::c2b = nullptr;
$chars* IBM1046$Holder::c2bIndex = nullptr;

void IBM1046$Holder::init$() {
}

void IBM1046$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM1046$Holder::b2cTable, $cstr({0xfe88, 0xd7, 0xf7, 0xf8f6, 0xf8f5, 0xf8f4, 0xf8f7, 0xfe71, 0x88, 0x25a0, 0x2502, 0x2500, 0x2510, 0x250c, 0x2514, 0x2518, 0xfe79, 0xfe7b, 0xfe7d, 0xfe7f, 0xfe77, 0xfe8a, 0xfef0, 0xfef3, 0xfef2, 0xfece, 0xfecf, 0xfed0, 0xfef6, 0xfef8, 0xfefa, 0xfefc, 0xa0, 0xf8fa, 0xf8f9, 0xf8f8, 0xa4, 0xf8fb, 0xfe8b, 0xfe91, 0xfe97, 0xfe9b, 0xfe9f, 0xfea3, 0x060c, 0xad, 0xfea7, 0xfeb3, 0x0660, 0x0661, 0x0662, 0x0663, 0x0664, 0x0665, 0x0666, 0x0667, 0x0668, 0x0669, 0xfeb7, 0x061b, 0xfebb, 0xfebf, 0xfeca, 0x061f, 0xfecb, 0xfe80, 0xfe81, 0xfe83, 0xfe85, 0xfe87, 0xfe89, 0xfe8d, 0xfe8f, 0xfe93, 0xfe95, 0xfe99, 0xfe9d, 0xfea1, 0xfea5, 0xfea9, 0xfeab, 0xfead, 0xfeaf, 0xfeb1, 0xfeb5, 0xfeb9, 0xfebd, 0xfec3, 0xfec7, 0xfec9, 0xfecd, 0xfecc, 0xfe82, 0xfe84, 0xfe8e, 0xfed3, 0x0640, 0xfed1, 0xfed5, 0xfed9, 0xfedd, 0xfee1, 0xfee5, 0xfeeb, 0xfeed, 0xfeef, 0xfef1, 0xfe70, 0xfe72, 0xfe74, 0xfe76, 0xfe78, 0xfe7a, 0xfe7c, 0xfe7e, 0xfed7, 0xfedb, 0xfedf, 0xf8fc, 0xfef5, 0xfef7, 0xfef9, 0xfefb, 0xfee3, 0xfee7, 0xfeec, 0xfee9, 0xfffd, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(IBM1046$Holder::b2c, IBM1046$Holder::b2cTable->toCharArray());
	$assignStatic(IBM1046$Holder::c2b, $new($chars, 1536));
	$assignStatic(IBM1046$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1046$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1046$Holder::c2b, IBM1046$Holder::c2bIndex);
	}
}

IBM1046$Holder::IBM1046$Holder() {
}

$Class* IBM1046$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1046$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1046$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1046$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1046$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM1046$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM1046$Holder", "sun.nio.cs.ext.IBM1046", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM1046$Holder",
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
		"sun.nio.cs.ext.IBM1046"
	};
	$loadClass(IBM1046$Holder, name, initialize, &classInfo$$, IBM1046$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM1046$Holder);
	});
	return class$;
}

$Class* IBM1046$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun