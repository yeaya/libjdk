#include <jdk/internal/net/http/hpack/NaiveHuffman.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <jdk/internal/net/http/hpack/NaiveHuffman$1.h>
#include <jdk/internal/net/http/hpack/NaiveHuffman$Code.h>
#include <jdk/internal/net/http/hpack/NaiveHuffman$Node.h>
#include <jcpp.h>

#undef EOS
#undef INSTANCE

using $NaiveHuffman$CodeArray = $Array<::jdk::internal::net::http::hpack::NaiveHuffman$Code>;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NaiveHuffman$1 = ::jdk::internal::net::http::hpack::NaiveHuffman$1;
using $NaiveHuffman$Code = ::jdk::internal::net::http::hpack::NaiveHuffman$Code;
using $NaiveHuffman$Node = ::jdk::internal::net::http::hpack::NaiveHuffman$Node;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

bool NaiveHuffman::$assertionsDisabled = false;
NaiveHuffman* NaiveHuffman::INSTANCE = nullptr;

void NaiveHuffman::init$() {
	$set(this, EOS, $new($NaiveHuffman$Code, 0x3fffffff, 30));
	$set(this, codes, $new($NaiveHuffman$CodeArray, 257));
	$set(this, root, $new($NaiveHuffman$1, this));
	addChar(0, 8184, 13);
	addChar(1, 0x007fffd8, 23);
	addChar(2, 0x0fffffe2, 28);
	addChar(3, 0x0fffffe3, 28);
	addChar(4, 0x0fffffe4, 28);
	addChar(5, 0x0fffffe5, 28);
	addChar(6, 0x0fffffe6, 28);
	addChar(7, 0x0fffffe7, 28);
	addChar(8, 0x0fffffe8, 28);
	addChar(9, 0x00ffffea, 24);
	addChar(10, 0x3ffffffc, 30);
	addChar(11, 0x0fffffe9, 28);
	addChar(12, 0x0fffffea, 28);
	addChar(13, 0x3ffffffd, 30);
	addChar(14, 0x0fffffeb, 28);
	addChar(15, 0x0fffffec, 28);
	addChar(16, 0x0fffffed, 28);
	addChar(17, 0x0fffffee, 28);
	addChar(18, 0x0fffffef, 28);
	addChar(19, 0x0ffffff0, 28);
	addChar(20, 0x0ffffff1, 28);
	addChar(21, 0x0ffffff2, 28);
	addChar(22, 0x3ffffffe, 30);
	addChar(23, 0x0ffffff3, 28);
	addChar(24, 0x0ffffff4, 28);
	addChar(25, 0x0ffffff5, 28);
	addChar(26, 0x0ffffff6, 28);
	addChar(27, 0x0ffffff7, 28);
	addChar(28, 0x0ffffff8, 28);
	addChar(29, 0x0ffffff9, 28);
	addChar(30, 0x0ffffffa, 28);
	addChar(31, 0x0ffffffb, 28);
	addChar(32, 20, 6);
	addChar(33, 1016, 10);
	addChar(34, 1017, 10);
	addChar(35, 4090, 12);
	addChar(36, 8185, 13);
	addChar(37, 21, 6);
	addChar(38, 248, 8);
	addChar(39, 2042, 11);
	addChar(40, 1018, 10);
	addChar(41, 1019, 10);
	addChar(42, 249, 8);
	addChar(43, 2043, 11);
	addChar(44, 250, 8);
	addChar(45, 22, 6);
	addChar(46, 23, 6);
	addChar(47, 24, 6);
	addChar(48, 0, 5);
	addChar(49, 1, 5);
	addChar(50, 2, 5);
	addChar(51, 25, 6);
	addChar(52, 26, 6);
	addChar(53, 27, 6);
	addChar(54, 28, 6);
	addChar(55, 29, 6);
	addChar(56, 30, 6);
	addChar(57, 31, 6);
	addChar(58, 92, 7);
	addChar(59, 251, 8);
	addChar(60, 32764, 15);
	addChar(61, 32, 6);
	addChar(62, 4091, 12);
	addChar(63, 1020, 10);
	addChar(64, 8186, 13);
	addChar(65, 33, 6);
	addChar(66, 93, 7);
	addChar(67, 94, 7);
	addChar(68, 95, 7);
	addChar(69, 96, 7);
	addChar(70, 97, 7);
	addChar(71, 98, 7);
	addChar(72, 99, 7);
	addChar(73, 100, 7);
	addChar(74, 101, 7);
	addChar(75, 102, 7);
	addChar(76, 103, 7);
	addChar(77, 104, 7);
	addChar(78, 105, 7);
	addChar(79, 106, 7);
	addChar(80, 107, 7);
	addChar(81, 108, 7);
	addChar(82, 109, 7);
	addChar(83, 110, 7);
	addChar(84, 111, 7);
	addChar(85, 112, 7);
	addChar(86, 113, 7);
	addChar(87, 114, 7);
	addChar(88, 252, 8);
	addChar(89, 115, 7);
	addChar(90, 253, 8);
	addChar(91, 8187, 13);
	addChar(92, 0x0007fff0, 19);
	addChar(93, 8188, 13);
	addChar(94, 16380, 14);
	addChar(95, 34, 6);
	addChar(96, 32765, 15);
	addChar(97, 3, 5);
	addChar(98, 35, 6);
	addChar(99, 4, 5);
	addChar(100, 36, 6);
	addChar(101, 5, 5);
	addChar(102, 37, 6);
	addChar(103, 38, 6);
	addChar(104, 39, 6);
	addChar(105, 6, 5);
	addChar(106, 116, 7);
	addChar(107, 117, 7);
	addChar(108, 40, 6);
	addChar(109, 41, 6);
	addChar(110, 42, 6);
	addChar(111, 7, 5);
	addChar(112, 43, 6);
	addChar(113, 118, 7);
	addChar(114, 44, 6);
	addChar(115, 8, 5);
	addChar(116, 9, 5);
	addChar(117, 45, 6);
	addChar(118, 119, 7);
	addChar(119, 120, 7);
	addChar(120, 121, 7);
	addChar(121, 122, 7);
	addChar(122, 123, 7);
	addChar(123, 32766, 15);
	addChar(124, 2044, 11);
	addChar(125, 16381, 14);
	addChar(126, 8189, 13);
	addChar(127, 0x0ffffffc, 28);
	addChar(128, 0x000fffe6, 20);
	addChar(129, 0x003fffd2, 22);
	addChar(130, 0x000fffe7, 20);
	addChar(131, 0x000fffe8, 20);
	addChar(132, 0x003fffd3, 22);
	addChar(133, 0x003fffd4, 22);
	addChar(134, 0x003fffd5, 22);
	addChar(135, 0x007fffd9, 23);
	addChar(136, 0x003fffd6, 22);
	addChar(137, 0x007fffda, 23);
	addChar(138, 0x007fffdb, 23);
	addChar(139, 0x007fffdc, 23);
	addChar(140, 0x007fffdd, 23);
	addChar(141, 0x007fffde, 23);
	addChar(142, 0x00ffffeb, 24);
	addChar(143, 0x007fffdf, 23);
	addChar(144, 0x00ffffec, 24);
	addChar(145, 0x00ffffed, 24);
	addChar(146, 0x003fffd7, 22);
	addChar(147, 0x007fffe0, 23);
	addChar(148, 0x00ffffee, 24);
	addChar(149, 0x007fffe1, 23);
	addChar(150, 0x007fffe2, 23);
	addChar(151, 0x007fffe3, 23);
	addChar(152, 0x007fffe4, 23);
	addChar(153, 0x001fffdc, 21);
	addChar(154, 0x003fffd8, 22);
	addChar(155, 0x007fffe5, 23);
	addChar(156, 0x003fffd9, 22);
	addChar(157, 0x007fffe6, 23);
	addChar(158, 0x007fffe7, 23);
	addChar(159, 0x00ffffef, 24);
	addChar(160, 0x003fffda, 22);
	addChar(161, 0x001fffdd, 21);
	addChar(162, 0x000fffe9, 20);
	addChar(163, 0x003fffdb, 22);
	addChar(164, 0x003fffdc, 22);
	addChar(165, 0x007fffe8, 23);
	addChar(166, 0x007fffe9, 23);
	addChar(167, 0x001fffde, 21);
	addChar(168, 0x007fffea, 23);
	addChar(169, 0x003fffdd, 22);
	addChar(170, 0x003fffde, 22);
	addChar(171, 0x00fffff0, 24);
	addChar(172, 0x001fffdf, 21);
	addChar(173, 0x003fffdf, 22);
	addChar(174, 0x007fffeb, 23);
	addChar(175, 0x007fffec, 23);
	addChar(176, 0x001fffe0, 21);
	addChar(177, 0x001fffe1, 21);
	addChar(178, 0x003fffe0, 22);
	addChar(179, 0x001fffe2, 21);
	addChar(180, 0x007fffed, 23);
	addChar(181, 0x003fffe1, 22);
	addChar(182, 0x007fffee, 23);
	addChar(183, 0x007fffef, 23);
	addChar(184, 0x000fffea, 20);
	addChar(185, 0x003fffe2, 22);
	addChar(186, 0x003fffe3, 22);
	addChar(187, 0x003fffe4, 22);
	addChar(188, 0x007ffff0, 23);
	addChar(189, 0x003fffe5, 22);
	addChar(190, 0x003fffe6, 22);
	addChar(191, 0x007ffff1, 23);
	addChar(192, 0x03ffffe0, 26);
	addChar(193, 0x03ffffe1, 26);
	addChar(194, 0x000fffeb, 20);
	addChar(195, 0x0007fff1, 19);
	addChar(196, 0x003fffe7, 22);
	addChar(197, 0x007ffff2, 23);
	addChar(198, 0x003fffe8, 22);
	addChar(199, 0x01ffffec, 25);
	addChar(200, 0x03ffffe2, 26);
	addChar(201, 0x03ffffe3, 26);
	addChar(202, 0x03ffffe4, 26);
	addChar(203, 0x07ffffde, 27);
	addChar(204, 0x07ffffdf, 27);
	addChar(205, 0x03ffffe5, 26);
	addChar(206, 0x00fffff1, 24);
	addChar(207, 0x01ffffed, 25);
	addChar(208, 0x0007fff2, 19);
	addChar(209, 0x001fffe3, 21);
	addChar(210, 0x03ffffe6, 26);
	addChar(211, 0x07ffffe0, 27);
	addChar(212, 0x07ffffe1, 27);
	addChar(213, 0x03ffffe7, 26);
	addChar(214, 0x07ffffe2, 27);
	addChar(215, 0x00fffff2, 24);
	addChar(216, 0x001fffe4, 21);
	addChar(217, 0x001fffe5, 21);
	addChar(218, 0x03ffffe8, 26);
	addChar(219, 0x03ffffe9, 26);
	addChar(220, 0x0ffffffd, 28);
	addChar(221, 0x07ffffe3, 27);
	addChar(222, 0x07ffffe4, 27);
	addChar(223, 0x07ffffe5, 27);
	addChar(224, 0x000fffec, 20);
	addChar(225, 0x00fffff3, 24);
	addChar(226, 0x000fffed, 20);
	addChar(227, 0x001fffe6, 21);
	addChar(228, 0x003fffe9, 22);
	addChar(229, 0x001fffe7, 21);
	addChar(230, 0x001fffe8, 21);
	addChar(231, 0x007ffff3, 23);
	addChar(232, 0x003fffea, 22);
	addChar(233, 0x003fffeb, 22);
	addChar(234, 0x01ffffee, 25);
	addChar(235, 0x01ffffef, 25);
	addChar(236, 0x00fffff4, 24);
	addChar(237, 0x00fffff5, 24);
	addChar(238, 0x03ffffea, 26);
	addChar(239, 0x007ffff4, 23);
	addChar(240, 0x03ffffeb, 26);
	addChar(241, 0x07ffffe6, 27);
	addChar(242, 0x03ffffec, 26);
	addChar(243, 0x03ffffed, 26);
	addChar(244, 0x07ffffe7, 27);
	addChar(245, 0x07ffffe8, 27);
	addChar(246, 0x07ffffe9, 27);
	addChar(247, 0x07ffffea, 27);
	addChar(248, 0x07ffffeb, 27);
	addChar(249, 0x0ffffffe, 28);
	addChar(250, 0x07ffffec, 27);
	addChar(251, 0x07ffffed, 27);
	addChar(252, 0x07ffffee, 27);
	addChar(253, 0x07ffffef, 27);
	addChar(254, 0x07fffff0, 27);
	addChar(255, 0x03ffffee, 26);
	addEOS(256, this->EOS->code, this->EOS->length);
}

int32_t NaiveHuffman::lengthOf($CharSequence* value) {
	return lengthOf(value, 0, $nc(value)->length());
}

int32_t NaiveHuffman::lengthOf($CharSequence* value, int32_t start, int32_t end) {
	$useLocalObjectStack();
	int32_t len = 0;
	for (int32_t i = start; i < end; ++i) {
		char16_t c = $nc(value)->charAt(i);
		len += $nc($(NaiveHuffman::INSTANCE->codeOf(c)))->length;
	}
	if (!NaiveHuffman::$assertionsDisabled && !((len / 8 + (len % 8 != 0 ? 1 : 0)) == (len + 7) / 8)) {
		$throwNew($AssertionError, len);
	}
	return (len + 7) / 8;
}

void NaiveHuffman::addChar(int32_t c, int32_t code, int32_t bitLength) {
	addLeaf(c, code, bitLength, false);
	this->codes->set(c, $$new($NaiveHuffman$Code, code, bitLength));
}

void NaiveHuffman::addEOS(int32_t c, int32_t code, int32_t bitLength) {
	addLeaf(c, code, bitLength, true);
	this->codes->set(c, $$new($NaiveHuffman$Code, code, bitLength));
}

void NaiveHuffman::addLeaf(int32_t c, int32_t code, int32_t bitLength, bool isEOS) {
	if (bitLength < 1) {
		$throwNew($IllegalArgumentException, "bitLength < 1"_s);
	}
	$var($NaiveHuffman$Node, curr, this->root);
	for (int32_t p = $sl(1, bitLength - 1); p != 0 && !$nc(curr)->isLeaf(); p = p >> 1) {
		curr->isEOSPath |= isEOS;
		$assign(curr, curr->addChildIfAbsent(p & code));
	}
	$nc(curr)->isEOSPath |= isEOS;
	if (curr->isLeaf()) {
		$throwNew($IllegalStateException, "Specified code is already taken"_s);
	}
	curr->setChar((char16_t)c);
}

$NaiveHuffman$Code* NaiveHuffman::codeOf(char16_t c) {
	$useLocalObjectStack();
	if (c > 255) {
		$throwNew($IllegalArgumentException, $$str({"char="_s, $$str(((int32_t)c))}));
	}
	return this->codes->get(c);
}

$NaiveHuffman$Node* NaiveHuffman::getRoot() {
	return this->root;
}

void NaiveHuffman::clinit$($Class* clazz) {
	NaiveHuffman::$assertionsDisabled = !NaiveHuffman::class$->desiredAssertionStatus();
	$assignStatic(NaiveHuffman::INSTANCE, $new(NaiveHuffman));
}

NaiveHuffman::NaiveHuffman() {
}

$Class* NaiveHuffman::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NaiveHuffman, $assertionsDisabled)},
		{"INSTANCE", "Ljdk/internal/net/http/hpack/NaiveHuffman;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NaiveHuffman, INSTANCE)},
		{"EOS", "Ljdk/internal/net/http/hpack/NaiveHuffman$Code;", nullptr, $PRIVATE | $FINAL, $field(NaiveHuffman, EOS)},
		{"codes", "[Ljdk/internal/net/http/hpack/NaiveHuffman$Code;", nullptr, $PRIVATE | $FINAL, $field(NaiveHuffman, codes)},
		{"root", "Ljdk/internal/net/http/hpack/NaiveHuffman$Node;", nullptr, $PRIVATE | $FINAL, $field(NaiveHuffman, root)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NaiveHuffman, init$, void)},
		{"addChar", "(III)V", nullptr, $PRIVATE, $method(NaiveHuffman, addChar, void, int32_t, int32_t, int32_t)},
		{"addEOS", "(III)V", nullptr, $PRIVATE, $method(NaiveHuffman, addEOS, void, int32_t, int32_t, int32_t)},
		{"addLeaf", "(IIIZ)V", nullptr, $PRIVATE, $method(NaiveHuffman, addLeaf, void, int32_t, int32_t, int32_t, bool)},
		{"codeOf", "(C)Ljdk/internal/net/http/hpack/NaiveHuffman$Code;", nullptr, $PRIVATE, $method(NaiveHuffman, codeOf, $NaiveHuffman$Code*, char16_t)},
		{"getRoot", "()Ljdk/internal/net/http/hpack/NaiveHuffman$Node;", nullptr, 0, $method(NaiveHuffman, getRoot, $NaiveHuffman$Node*)},
		{"lengthOf", "(Ljava/lang/CharSequence;)I", nullptr, $PUBLIC, $method(NaiveHuffman, lengthOf, int32_t, $CharSequence*)},
		{"lengthOf", "(Ljava/lang/CharSequence;II)I", nullptr, $PUBLIC, $method(NaiveHuffman, lengthOf, int32_t, $CharSequence*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.NaiveHuffman$Code", "jdk.internal.net.http.hpack.NaiveHuffman", "Code", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.NaiveHuffman$Node", "jdk.internal.net.http.hpack.NaiveHuffman", "Node", $STATIC},
		{"jdk.internal.net.http.hpack.NaiveHuffman$Writer", "jdk.internal.net.http.hpack.NaiveHuffman", "Writer", $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.NaiveHuffman$Reader", "jdk.internal.net.http.hpack.NaiveHuffman", "Reader", $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.NaiveHuffman$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.NaiveHuffman",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.NaiveHuffman$Code,jdk.internal.net.http.hpack.NaiveHuffman$Node,jdk.internal.net.http.hpack.NaiveHuffman$Writer,jdk.internal.net.http.hpack.NaiveHuffman$Reader,jdk.internal.net.http.hpack.NaiveHuffman$1"
	};
	$loadClass(NaiveHuffman, name, initialize, &classInfo$$, NaiveHuffman::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NaiveHuffman);
	});
	return class$;
}

$Class* NaiveHuffman::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk