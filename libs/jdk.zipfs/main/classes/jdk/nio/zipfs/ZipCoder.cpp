#include <jdk/nio/zipfs/ZipCoder.h>

#include <java/lang/ThreadLocal.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Arrays.h>
#include <jdk/nio/zipfs/ZipCoder$UTF8.h>
#include <jcpp.h>

#undef REPORT
#undef UTF_8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Arrays = ::java::util::Arrays;
using $ZipCoder$UTF8 = ::jdk::nio::zipfs::ZipCoder$UTF8;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipCoder_FieldInfo_[] = {
	{"utf8", "Ljdk/nio/zipfs/ZipCoder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipCoder, utf8)},
	{"cs", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE, $field(ZipCoder, cs)},
	{"decTL", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/nio/charset/CharsetDecoder;>;", $PRIVATE | $FINAL, $field(ZipCoder, decTL)},
	{"encTL", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/nio/charset/CharsetEncoder;>;", $PRIVATE | $FINAL, $field(ZipCoder, encTL)},
	{}
};

$MethodInfo _ZipCoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipCoder::*)($Charset*)>(&ZipCoder::init$))},
	{"decoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PRIVATE, $method(static_cast<$CharsetDecoder*(ZipCoder::*)()>(&ZipCoder::decoder))},
	{"encoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PRIVATE, $method(static_cast<$CharsetEncoder*(ZipCoder::*)()>(&ZipCoder::encoder))},
	{"get", "(Ljava/lang/String;)Ljdk/nio/zipfs/ZipCoder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ZipCoder*(*)($String*)>(&ZipCoder::get))},
	{"getBytes", "(Ljava/lang/String;)[B", nullptr, 0},
	{"isUTF8", "()Z", nullptr, 0},
	{"toString", "([B)Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _ZipCoder_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipCoder$UTF8", "jdk.nio.zipfs.ZipCoder", "UTF8", $STATIC},
	{}
};

$ClassInfo _ZipCoder_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipCoder",
	"java.lang.Object",
	nullptr,
	_ZipCoder_FieldInfo_,
	_ZipCoder_MethodInfo_,
	nullptr,
	nullptr,
	_ZipCoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipCoder$UTF8"
};

$Object* allocate$ZipCoder($Class* clazz) {
	return $of($alloc(ZipCoder));
}

ZipCoder* ZipCoder::utf8 = nullptr;

ZipCoder* ZipCoder::get($String* csn) {
	$init(ZipCoder);
	$useLocalCurrentObjectStackCache();
	$var($Charset, cs, $Charset::forName(csn));
	if ($nc($($nc(cs)->name()))->equals("UTF-8"_s)) {
		return ZipCoder::utf8;
	}
	return $new(ZipCoder, cs);
}

$String* ZipCoder::toString($bytes* ba) {
	$useLocalCurrentObjectStackCache();
	$var($CharsetDecoder, cd, $nc($(decoder()))->reset());
	int32_t clen = $cast(int32_t, ($nc(ba)->length * $nc(cd)->maxCharsPerByte()));
	$var($chars, ca, $new($chars, clen));
	if (clen == 0) {
		return $new($String, ca);
	}
	$var($ByteBuffer, bb, $ByteBuffer::wrap(ba, 0, ba->length));
	$var($CharBuffer, cb, $CharBuffer::wrap(ca));
	$var($CoderResult, cr, cd->decode(bb, cb, true));
	if (!$nc(cr)->isUnderflow()) {
		$throwNew($IllegalArgumentException, $(cr->toString()));
	}
	$assign(cr, cd->flush(cb));
	if (!$nc(cr)->isUnderflow()) {
		$throwNew($IllegalArgumentException, $(cr->toString()));
	}
	return $new($String, ca, 0, $nc(cb)->position());
}

$bytes* ZipCoder::getBytes($String* s) {
	$useLocalCurrentObjectStackCache();
	$var($CharsetEncoder, ce, $nc($(encoder()))->reset());
	$var($chars, ca, $nc(s)->toCharArray());
	int32_t len = $cast(int32_t, (ca->length * $nc(ce)->maxBytesPerChar()));
	$var($bytes, ba, $new($bytes, len));
	if (len == 0) {
		return ba;
	}
	$var($ByteBuffer, bb, $ByteBuffer::wrap(ba));
	$var($CharBuffer, cb, $CharBuffer::wrap(ca));
	$var($CoderResult, cr, ce->encode(cb, bb, true));
	if (!$nc(cr)->isUnderflow()) {
		$throwNew($IllegalArgumentException, $(cr->toString()));
	}
	$assign(cr, ce->flush(bb));
	if (!$nc(cr)->isUnderflow()) {
		$throwNew($IllegalArgumentException, $(cr->toString()));
	}
	if ($nc(bb)->position() == ba->length) {
		return ba;
	} else {
		return $Arrays::copyOf(ba, bb->position());
	}
}

bool ZipCoder::isUTF8() {
	$init($StandardCharsets);
	return this->cs == $StandardCharsets::UTF_8;
}

void ZipCoder::init$($Charset* cs) {
	$set(this, decTL, $new($ThreadLocal));
	$set(this, encTL, $new($ThreadLocal));
	$set(this, cs, cs);
}

$CharsetDecoder* ZipCoder::decoder() {
	$useLocalCurrentObjectStackCache();
	$var($CharsetDecoder, dec, $cast($CharsetDecoder, $nc(this->decTL)->get()));
	if (dec == nullptr) {
		$init($CodingErrorAction);
		$assign(dec, $nc($($nc($($nc(this->cs)->newDecoder()))->onMalformedInput($CodingErrorAction::REPORT)))->onUnmappableCharacter($CodingErrorAction::REPORT));
		$nc(this->decTL)->set(dec);
	}
	return dec;
}

$CharsetEncoder* ZipCoder::encoder() {
	$useLocalCurrentObjectStackCache();
	$var($CharsetEncoder, enc, $cast($CharsetEncoder, $nc(this->encTL)->get()));
	if (enc == nullptr) {
		$init($CodingErrorAction);
		$assign(enc, $nc($($nc($($nc(this->cs)->newEncoder()))->onMalformedInput($CodingErrorAction::REPORT)))->onUnmappableCharacter($CodingErrorAction::REPORT));
		$nc(this->encTL)->set(enc);
	}
	return enc;
}

void clinit$ZipCoder($Class* class$) {
	$assignStatic(ZipCoder::utf8, $new($ZipCoder$UTF8));
}

ZipCoder::ZipCoder() {
}

$Class* ZipCoder::load$($String* name, bool initialize) {
	$loadClass(ZipCoder, name, initialize, &_ZipCoder_ClassInfo_, clinit$ZipCoder, allocate$ZipCoder);
	return class$;
}

$Class* ZipCoder::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk