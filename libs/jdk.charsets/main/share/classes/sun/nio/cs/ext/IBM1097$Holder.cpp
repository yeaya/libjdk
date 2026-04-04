#include <sun/nio/cs/ext/IBM1097$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1097.h>
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

$String* IBM1097$Holder::b2cTable = nullptr;
$chars* IBM1097$Holder::b2c = nullptr;
$chars* IBM1097$Holder::c2b = nullptr;
$chars* IBM1097$Holder::c2bIndex = nullptr;

void IBM1097$Holder::init$() {
}

void IBM1097$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM1097$Holder::b2cTable, $cstr({0xfb8a, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xab, 0xbb, 0xfeb1, 0xfeb3, 0xfeb5, 0xfeb7, 0xfeb9, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0xfebb, 0xfebd, 0xfebf, 0xfec1, 0xfec3, 0xfec5, 0xfec7, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xfec9, 0xfeca, 0xfecb, 0xfecc, 0xfecd, 0xfece, 0xfecf, 0xfed0, 0xfed1, 0xfed3, 0xfed5, 0xfed7, 0xfb8e, 0xfedb, 0xfb92, 0xfb94, '[', ']', 0xfedd, 0xfedf, 0xfee1, 0xd7, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xad, 0xfee3, 0xfee5, 0xfee7, 0xfeed, 0xfee9, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xfeeb, 0xfeec, 0xfba4, 0xfbfc, 0xfbfd, 0xfbfe, '\\', 0x061f, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0x0640, 0x06f0, 0x06f1, 0x06f2, 0x06f3, 0x06f4, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0x06f5, 0x06f6, 0x06f7, 0x06f8, 0x06f9, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, 0x85, '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0xa0, 0x060c, 0x064b, 0xfe81, 0xfe82, 0xf8fa, 0xfe8d, 0xfe8e, 0xf8fb, 0xa4, '.', '<', '(', '+', '|', '&', 0xfe80, 0xfe83, 0xfe84, 0xf8f9, 0xfe85, 0xfe8b, 0xfe8f, 0xfe91, 0xfb56, '!', '$', '*', ')', ';', 0xac, '-', '/', 0xfb58, 0xfe95, 0xfe97, 0xfe99, 0xfe9b, 0xfe9d, 0xfe9f, 0xfb7a, 0x061b, ',', '%', '_', '>', '?', 0xfb7c, 0xfea1, 0xfea3, 0xfea5, 0xfea7, 0xfea9, 0xfeab, 0xfead, 0xfeaf, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM1097$Holder::b2c, IBM1097$Holder::b2cTable->toCharArray());
	$assignStatic(IBM1097$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM1097$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1097$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1097$Holder::c2b, IBM1097$Holder::c2bIndex);
	}
}

IBM1097$Holder::IBM1097$Holder() {
}

$Class* IBM1097$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1097$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1097$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1097$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1097$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM1097$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM1097$Holder", "sun.nio.cs.ext.IBM1097", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM1097$Holder",
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
		"sun.nio.cs.ext.IBM1097"
	};
	$loadClass(IBM1097$Holder, name, initialize, &classInfo$$, IBM1097$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM1097$Holder);
	});
	return class$;
}

$Class* IBM1097$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun