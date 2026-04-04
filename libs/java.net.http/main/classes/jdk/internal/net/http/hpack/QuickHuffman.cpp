#include <jdk/internal/net/http/hpack/QuickHuffman.h>
#include <java/lang/AssertionError.h>
#include <jdk/internal/net/http/hpack/HPACK.h>
#include <jdk/internal/net/http/hpack/QuickHuffman$ImmutableNode.h>
#include <jdk/internal/net/http/hpack/QuickHuffman$Node.h>
#include <jdk/internal/net/http/hpack/QuickHuffman$TemporaryNode.h>
#include <jcpp.h>

#undef EOS_LENGTH
#undef EOS_LSB
#undef EOS_MSB

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HPACK = ::jdk::internal::net::http::hpack::HPACK;
using $QuickHuffman$ImmutableNode = ::jdk::internal::net::http::hpack::QuickHuffman$ImmutableNode;
using $QuickHuffman$Node = ::jdk::internal::net::http::hpack::QuickHuffman$Node;
using $QuickHuffman$TemporaryNode = ::jdk::internal::net::http::hpack::QuickHuffman$TemporaryNode;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

bool QuickHuffman::$assertionsDisabled = false;
$longs* QuickHuffman::codes = nullptr;
$QuickHuffman$Node* QuickHuffman::root = nullptr;

int64_t QuickHuffman::codeValueOf(char16_t c) {
	$init(QuickHuffman);
	return QuickHuffman::codes->get(c) & (int64_t)0xffffffff00000000;
}

int64_t QuickHuffman::codeLengthOf(char16_t c) {
	$init(QuickHuffman);
	return QuickHuffman::codes->get(c) & (int64_t)0xffffffff;
}

$QuickHuffman$Node* QuickHuffman::buildTrie() {
	$init(QuickHuffman);
	$var($QuickHuffman$TemporaryNode, tmpRoot, $new($QuickHuffman$TemporaryNode));
	addChar(tmpRoot, 0, 8184, 13);
	addChar(tmpRoot, 1, 0x007fffd8, 23);
	addChar(tmpRoot, 2, 0x0fffffe2, 28);
	addChar(tmpRoot, 3, 0x0fffffe3, 28);
	addChar(tmpRoot, 4, 0x0fffffe4, 28);
	addChar(tmpRoot, 5, 0x0fffffe5, 28);
	addChar(tmpRoot, 6, 0x0fffffe6, 28);
	addChar(tmpRoot, 7, 0x0fffffe7, 28);
	addChar(tmpRoot, 8, 0x0fffffe8, 28);
	addChar(tmpRoot, 9, 0x00ffffea, 24);
	addChar(tmpRoot, 10, 0x3ffffffc, 30);
	addChar(tmpRoot, 11, 0x0fffffe9, 28);
	addChar(tmpRoot, 12, 0x0fffffea, 28);
	addChar(tmpRoot, 13, 0x3ffffffd, 30);
	addChar(tmpRoot, 14, 0x0fffffeb, 28);
	addChar(tmpRoot, 15, 0x0fffffec, 28);
	addChar(tmpRoot, 16, 0x0fffffed, 28);
	addChar(tmpRoot, 17, 0x0fffffee, 28);
	addChar(tmpRoot, 18, 0x0fffffef, 28);
	addChar(tmpRoot, 19, 0x0ffffff0, 28);
	addChar(tmpRoot, 20, 0x0ffffff1, 28);
	addChar(tmpRoot, 21, 0x0ffffff2, 28);
	addChar(tmpRoot, 22, 0x3ffffffe, 30);
	addChar(tmpRoot, 23, 0x0ffffff3, 28);
	addChar(tmpRoot, 24, 0x0ffffff4, 28);
	addChar(tmpRoot, 25, 0x0ffffff5, 28);
	addChar(tmpRoot, 26, 0x0ffffff6, 28);
	addChar(tmpRoot, 27, 0x0ffffff7, 28);
	addChar(tmpRoot, 28, 0x0ffffff8, 28);
	addChar(tmpRoot, 29, 0x0ffffff9, 28);
	addChar(tmpRoot, 30, 0x0ffffffa, 28);
	addChar(tmpRoot, 31, 0x0ffffffb, 28);
	addChar(tmpRoot, 32, 20, 6);
	addChar(tmpRoot, 33, 1016, 10);
	addChar(tmpRoot, 34, 1017, 10);
	addChar(tmpRoot, 35, 4090, 12);
	addChar(tmpRoot, 36, 8185, 13);
	addChar(tmpRoot, 37, 21, 6);
	addChar(tmpRoot, 38, 248, 8);
	addChar(tmpRoot, 39, 2042, 11);
	addChar(tmpRoot, 40, 1018, 10);
	addChar(tmpRoot, 41, 1019, 10);
	addChar(tmpRoot, 42, 249, 8);
	addChar(tmpRoot, 43, 2043, 11);
	addChar(tmpRoot, 44, 250, 8);
	addChar(tmpRoot, 45, 22, 6);
	addChar(tmpRoot, 46, 23, 6);
	addChar(tmpRoot, 47, 24, 6);
	addChar(tmpRoot, 48, 0, 5);
	addChar(tmpRoot, 49, 1, 5);
	addChar(tmpRoot, 50, 2, 5);
	addChar(tmpRoot, 51, 25, 6);
	addChar(tmpRoot, 52, 26, 6);
	addChar(tmpRoot, 53, 27, 6);
	addChar(tmpRoot, 54, 28, 6);
	addChar(tmpRoot, 55, 29, 6);
	addChar(tmpRoot, 56, 30, 6);
	addChar(tmpRoot, 57, 31, 6);
	addChar(tmpRoot, 58, 92, 7);
	addChar(tmpRoot, 59, 251, 8);
	addChar(tmpRoot, 60, 32764, 15);
	addChar(tmpRoot, 61, 32, 6);
	addChar(tmpRoot, 62, 4091, 12);
	addChar(tmpRoot, 63, 1020, 10);
	addChar(tmpRoot, 64, 8186, 13);
	addChar(tmpRoot, 65, 33, 6);
	addChar(tmpRoot, 66, 93, 7);
	addChar(tmpRoot, 67, 94, 7);
	addChar(tmpRoot, 68, 95, 7);
	addChar(tmpRoot, 69, 96, 7);
	addChar(tmpRoot, 70, 97, 7);
	addChar(tmpRoot, 71, 98, 7);
	addChar(tmpRoot, 72, 99, 7);
	addChar(tmpRoot, 73, 100, 7);
	addChar(tmpRoot, 74, 101, 7);
	addChar(tmpRoot, 75, 102, 7);
	addChar(tmpRoot, 76, 103, 7);
	addChar(tmpRoot, 77, 104, 7);
	addChar(tmpRoot, 78, 105, 7);
	addChar(tmpRoot, 79, 106, 7);
	addChar(tmpRoot, 80, 107, 7);
	addChar(tmpRoot, 81, 108, 7);
	addChar(tmpRoot, 82, 109, 7);
	addChar(tmpRoot, 83, 110, 7);
	addChar(tmpRoot, 84, 111, 7);
	addChar(tmpRoot, 85, 112, 7);
	addChar(tmpRoot, 86, 113, 7);
	addChar(tmpRoot, 87, 114, 7);
	addChar(tmpRoot, 88, 252, 8);
	addChar(tmpRoot, 89, 115, 7);
	addChar(tmpRoot, 90, 253, 8);
	addChar(tmpRoot, 91, 8187, 13);
	addChar(tmpRoot, 92, 0x0007fff0, 19);
	addChar(tmpRoot, 93, 8188, 13);
	addChar(tmpRoot, 94, 16380, 14);
	addChar(tmpRoot, 95, 34, 6);
	addChar(tmpRoot, 96, 32765, 15);
	addChar(tmpRoot, 97, 3, 5);
	addChar(tmpRoot, 98, 35, 6);
	addChar(tmpRoot, 99, 4, 5);
	addChar(tmpRoot, 100, 36, 6);
	addChar(tmpRoot, 101, 5, 5);
	addChar(tmpRoot, 102, 37, 6);
	addChar(tmpRoot, 103, 38, 6);
	addChar(tmpRoot, 104, 39, 6);
	addChar(tmpRoot, 105, 6, 5);
	addChar(tmpRoot, 106, 116, 7);
	addChar(tmpRoot, 107, 117, 7);
	addChar(tmpRoot, 108, 40, 6);
	addChar(tmpRoot, 109, 41, 6);
	addChar(tmpRoot, 110, 42, 6);
	addChar(tmpRoot, 111, 7, 5);
	addChar(tmpRoot, 112, 43, 6);
	addChar(tmpRoot, 113, 118, 7);
	addChar(tmpRoot, 114, 44, 6);
	addChar(tmpRoot, 115, 8, 5);
	addChar(tmpRoot, 116, 9, 5);
	addChar(tmpRoot, 117, 45, 6);
	addChar(tmpRoot, 118, 119, 7);
	addChar(tmpRoot, 119, 120, 7);
	addChar(tmpRoot, 120, 121, 7);
	addChar(tmpRoot, 121, 122, 7);
	addChar(tmpRoot, 122, 123, 7);
	addChar(tmpRoot, 123, 32766, 15);
	addChar(tmpRoot, 124, 2044, 11);
	addChar(tmpRoot, 125, 16381, 14);
	addChar(tmpRoot, 126, 8189, 13);
	addChar(tmpRoot, 127, 0x0ffffffc, 28);
	addChar(tmpRoot, 128, 0x000fffe6, 20);
	addChar(tmpRoot, 129, 0x003fffd2, 22);
	addChar(tmpRoot, 130, 0x000fffe7, 20);
	addChar(tmpRoot, 131, 0x000fffe8, 20);
	addChar(tmpRoot, 132, 0x003fffd3, 22);
	addChar(tmpRoot, 133, 0x003fffd4, 22);
	addChar(tmpRoot, 134, 0x003fffd5, 22);
	addChar(tmpRoot, 135, 0x007fffd9, 23);
	addChar(tmpRoot, 136, 0x003fffd6, 22);
	addChar(tmpRoot, 137, 0x007fffda, 23);
	addChar(tmpRoot, 138, 0x007fffdb, 23);
	addChar(tmpRoot, 139, 0x007fffdc, 23);
	addChar(tmpRoot, 140, 0x007fffdd, 23);
	addChar(tmpRoot, 141, 0x007fffde, 23);
	addChar(tmpRoot, 142, 0x00ffffeb, 24);
	addChar(tmpRoot, 143, 0x007fffdf, 23);
	addChar(tmpRoot, 144, 0x00ffffec, 24);
	addChar(tmpRoot, 145, 0x00ffffed, 24);
	addChar(tmpRoot, 146, 0x003fffd7, 22);
	addChar(tmpRoot, 147, 0x007fffe0, 23);
	addChar(tmpRoot, 148, 0x00ffffee, 24);
	addChar(tmpRoot, 149, 0x007fffe1, 23);
	addChar(tmpRoot, 150, 0x007fffe2, 23);
	addChar(tmpRoot, 151, 0x007fffe3, 23);
	addChar(tmpRoot, 152, 0x007fffe4, 23);
	addChar(tmpRoot, 153, 0x001fffdc, 21);
	addChar(tmpRoot, 154, 0x003fffd8, 22);
	addChar(tmpRoot, 155, 0x007fffe5, 23);
	addChar(tmpRoot, 156, 0x003fffd9, 22);
	addChar(tmpRoot, 157, 0x007fffe6, 23);
	addChar(tmpRoot, 158, 0x007fffe7, 23);
	addChar(tmpRoot, 159, 0x00ffffef, 24);
	addChar(tmpRoot, 160, 0x003fffda, 22);
	addChar(tmpRoot, 161, 0x001fffdd, 21);
	addChar(tmpRoot, 162, 0x000fffe9, 20);
	addChar(tmpRoot, 163, 0x003fffdb, 22);
	addChar(tmpRoot, 164, 0x003fffdc, 22);
	addChar(tmpRoot, 165, 0x007fffe8, 23);
	addChar(tmpRoot, 166, 0x007fffe9, 23);
	addChar(tmpRoot, 167, 0x001fffde, 21);
	addChar(tmpRoot, 168, 0x007fffea, 23);
	addChar(tmpRoot, 169, 0x003fffdd, 22);
	addChar(tmpRoot, 170, 0x003fffde, 22);
	addChar(tmpRoot, 171, 0x00fffff0, 24);
	addChar(tmpRoot, 172, 0x001fffdf, 21);
	addChar(tmpRoot, 173, 0x003fffdf, 22);
	addChar(tmpRoot, 174, 0x007fffeb, 23);
	addChar(tmpRoot, 175, 0x007fffec, 23);
	addChar(tmpRoot, 176, 0x001fffe0, 21);
	addChar(tmpRoot, 177, 0x001fffe1, 21);
	addChar(tmpRoot, 178, 0x003fffe0, 22);
	addChar(tmpRoot, 179, 0x001fffe2, 21);
	addChar(tmpRoot, 180, 0x007fffed, 23);
	addChar(tmpRoot, 181, 0x003fffe1, 22);
	addChar(tmpRoot, 182, 0x007fffee, 23);
	addChar(tmpRoot, 183, 0x007fffef, 23);
	addChar(tmpRoot, 184, 0x000fffea, 20);
	addChar(tmpRoot, 185, 0x003fffe2, 22);
	addChar(tmpRoot, 186, 0x003fffe3, 22);
	addChar(tmpRoot, 187, 0x003fffe4, 22);
	addChar(tmpRoot, 188, 0x007ffff0, 23);
	addChar(tmpRoot, 189, 0x003fffe5, 22);
	addChar(tmpRoot, 190, 0x003fffe6, 22);
	addChar(tmpRoot, 191, 0x007ffff1, 23);
	addChar(tmpRoot, 192, 0x03ffffe0, 26);
	addChar(tmpRoot, 193, 0x03ffffe1, 26);
	addChar(tmpRoot, 194, 0x000fffeb, 20);
	addChar(tmpRoot, 195, 0x0007fff1, 19);
	addChar(tmpRoot, 196, 0x003fffe7, 22);
	addChar(tmpRoot, 197, 0x007ffff2, 23);
	addChar(tmpRoot, 198, 0x003fffe8, 22);
	addChar(tmpRoot, 199, 0x01ffffec, 25);
	addChar(tmpRoot, 200, 0x03ffffe2, 26);
	addChar(tmpRoot, 201, 0x03ffffe3, 26);
	addChar(tmpRoot, 202, 0x03ffffe4, 26);
	addChar(tmpRoot, 203, 0x07ffffde, 27);
	addChar(tmpRoot, 204, 0x07ffffdf, 27);
	addChar(tmpRoot, 205, 0x03ffffe5, 26);
	addChar(tmpRoot, 206, 0x00fffff1, 24);
	addChar(tmpRoot, 207, 0x01ffffed, 25);
	addChar(tmpRoot, 208, 0x0007fff2, 19);
	addChar(tmpRoot, 209, 0x001fffe3, 21);
	addChar(tmpRoot, 210, 0x03ffffe6, 26);
	addChar(tmpRoot, 211, 0x07ffffe0, 27);
	addChar(tmpRoot, 212, 0x07ffffe1, 27);
	addChar(tmpRoot, 213, 0x03ffffe7, 26);
	addChar(tmpRoot, 214, 0x07ffffe2, 27);
	addChar(tmpRoot, 215, 0x00fffff2, 24);
	addChar(tmpRoot, 216, 0x001fffe4, 21);
	addChar(tmpRoot, 217, 0x001fffe5, 21);
	addChar(tmpRoot, 218, 0x03ffffe8, 26);
	addChar(tmpRoot, 219, 0x03ffffe9, 26);
	addChar(tmpRoot, 220, 0x0ffffffd, 28);
	addChar(tmpRoot, 221, 0x07ffffe3, 27);
	addChar(tmpRoot, 222, 0x07ffffe4, 27);
	addChar(tmpRoot, 223, 0x07ffffe5, 27);
	addChar(tmpRoot, 224, 0x000fffec, 20);
	addChar(tmpRoot, 225, 0x00fffff3, 24);
	addChar(tmpRoot, 226, 0x000fffed, 20);
	addChar(tmpRoot, 227, 0x001fffe6, 21);
	addChar(tmpRoot, 228, 0x003fffe9, 22);
	addChar(tmpRoot, 229, 0x001fffe7, 21);
	addChar(tmpRoot, 230, 0x001fffe8, 21);
	addChar(tmpRoot, 231, 0x007ffff3, 23);
	addChar(tmpRoot, 232, 0x003fffea, 22);
	addChar(tmpRoot, 233, 0x003fffeb, 22);
	addChar(tmpRoot, 234, 0x01ffffee, 25);
	addChar(tmpRoot, 235, 0x01ffffef, 25);
	addChar(tmpRoot, 236, 0x00fffff4, 24);
	addChar(tmpRoot, 237, 0x00fffff5, 24);
	addChar(tmpRoot, 238, 0x03ffffea, 26);
	addChar(tmpRoot, 239, 0x007ffff4, 23);
	addChar(tmpRoot, 240, 0x03ffffeb, 26);
	addChar(tmpRoot, 241, 0x07ffffe6, 27);
	addChar(tmpRoot, 242, 0x03ffffec, 26);
	addChar(tmpRoot, 243, 0x03ffffed, 26);
	addChar(tmpRoot, 244, 0x07ffffe7, 27);
	addChar(tmpRoot, 245, 0x07ffffe8, 27);
	addChar(tmpRoot, 246, 0x07ffffe9, 27);
	addChar(tmpRoot, 247, 0x07ffffea, 27);
	addChar(tmpRoot, 248, 0x07ffffeb, 27);
	addChar(tmpRoot, 249, 0x0ffffffe, 28);
	addChar(tmpRoot, 250, 0x07ffffec, 27);
	addChar(tmpRoot, 251, 0x07ffffed, 27);
	addChar(tmpRoot, 252, 0x07ffffee, 27);
	addChar(tmpRoot, 253, 0x07ffffef, 27);
	addChar(tmpRoot, 254, 0x07fffff0, 27);
	addChar(tmpRoot, 255, 0x03ffffee, 26);
	addEOS(tmpRoot, 256, QuickHuffman::EOS_LSB, QuickHuffman::EOS_LENGTH);
	return $QuickHuffman$ImmutableNode::copyOf(tmpRoot);
}

void QuickHuffman::init$() {
}

void QuickHuffman::addChar($QuickHuffman$Node* root, int32_t symbol, int32_t code, int32_t bitLength) {
	$init(QuickHuffman);
	addLeaf(root, (char16_t)symbol, code, bitLength, false);
	int64_t value = $sl((int64_t)code, 64 - bitLength);
	QuickHuffman::codes->set(symbol, value | bitLength);
}

void QuickHuffman::addEOS($QuickHuffman$Node* root, int32_t symbol, int32_t code, int32_t bitLength) {
	$init(QuickHuffman);
	addLeaf(root, (char16_t)symbol, code, bitLength, true);
}

void QuickHuffman::addLeaf($QuickHuffman$Node* root, char16_t symbol, int32_t code, int32_t bitLength, bool isEOS) {
	$init(QuickHuffman);
	$useLocalObjectStack();
	if (!QuickHuffman::$assertionsDisabled && !(0 < bitLength && bitLength <= 32)) {
		$throwNew($AssertionError, bitLength);
	}
	$var($QuickHuffman$Node, curr, root);
	int32_t nBytes = $HPACK::bytesForBits(bitLength);
	int32_t align = (nBytes << 3) - bitLength;
	code <<= align;
	int32_t l = 0;
	for (int32_t i = 0, probe = $sl(255, (nBytes - 1) << 3); i < nBytes - 1; ++i, $usrAssign(probe, 8)) {
		$nc(curr)->setEOSPath($nc(curr)->isEOSPath() | isEOS);
		int32_t idx = $usr(code & probe, (nBytes - 1 - i) << 3);
		$assign(curr, curr->getOrCreateChild(idx));
		$nc(curr)->setLength(8);
		l += 8;
	}
	int32_t idx = code & 0xff;
	$nc(curr)->setEOSPath($nc(curr)->isEOSPath() | isEOS);
	for (int32_t i = 0; i < ($sl(1, align)); ++i) {
		$var($QuickHuffman$Node, child, curr->getOrCreateChild(idx | i));
		$nc(child)->setSymbol(symbol);
		child->setEOSPath(child->isEOSPath() | isEOS);
		child->setLength(bitLength - l);
	}
}

void QuickHuffman::clinit$($Class* clazz) {
	QuickHuffman::$assertionsDisabled = !QuickHuffman::class$->desiredAssertionStatus();
	$assignStatic(QuickHuffman::codes, $new($longs, 256));
	$assignStatic(QuickHuffman::root, QuickHuffman::buildTrie());
}

QuickHuffman::QuickHuffman() {
}

$Class* QuickHuffman::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(QuickHuffman, $assertionsDisabled)},
		{"codes", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(QuickHuffman, codes)},
		{"EOS_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QuickHuffman, EOS_LENGTH)},
		{"EOS_LSB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QuickHuffman, EOS_LSB)},
		{"EOS_MSB", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QuickHuffman, EOS_MSB)},
		{"root", "Ljdk/internal/net/http/hpack/QuickHuffman$Node;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(QuickHuffman, root)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(QuickHuffman, init$, void)},
		{"addChar", "(Ljdk/internal/net/http/hpack/QuickHuffman$Node;III)V", nullptr, $PRIVATE | $STATIC, $staticMethod(QuickHuffman, addChar, void, $QuickHuffman$Node*, int32_t, int32_t, int32_t)},
		{"addEOS", "(Ljdk/internal/net/http/hpack/QuickHuffman$Node;III)V", nullptr, $PRIVATE | $STATIC, $staticMethod(QuickHuffman, addEOS, void, $QuickHuffman$Node*, int32_t, int32_t, int32_t)},
		{"addLeaf", "(Ljdk/internal/net/http/hpack/QuickHuffman$Node;CIIZ)V", nullptr, $PRIVATE | $STATIC, $staticMethod(QuickHuffman, addLeaf, void, $QuickHuffman$Node*, char16_t, int32_t, int32_t, bool)},
		{"buildTrie", "()Ljdk/internal/net/http/hpack/QuickHuffman$Node;", nullptr, $PRIVATE | $STATIC, $staticMethod(QuickHuffman, buildTrie, $QuickHuffman$Node*)},
		{"codeLengthOf", "(C)J", nullptr, $PRIVATE | $STATIC, $staticMethod(QuickHuffman, codeLengthOf, int64_t, char16_t)},
		{"codeValueOf", "(C)J", nullptr, $PRIVATE | $STATIC, $staticMethod(QuickHuffman, codeValueOf, int64_t, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.QuickHuffman$Writer", "jdk.internal.net.http.hpack.QuickHuffman", "Writer", $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.QuickHuffman$Reader", "jdk.internal.net.http.hpack.QuickHuffman", "Reader", $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.QuickHuffman$ImmutableNode", "jdk.internal.net.http.hpack.QuickHuffman", "ImmutableNode", $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.QuickHuffman$TemporaryNode", "jdk.internal.net.http.hpack.QuickHuffman", "TemporaryNode", $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.QuickHuffman$Node", "jdk.internal.net.http.hpack.QuickHuffman", "Node", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.QuickHuffman",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.QuickHuffman$Writer,jdk.internal.net.http.hpack.QuickHuffman$Reader,jdk.internal.net.http.hpack.QuickHuffman$ImmutableNode,jdk.internal.net.http.hpack.QuickHuffman$TemporaryNode,jdk.internal.net.http.hpack.QuickHuffman$Node"
	};
	$loadClass(QuickHuffman, name, initialize, &classInfo$$, QuickHuffman::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(QuickHuffman);
	});
	return class$;
}

$Class* QuickHuffman::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk