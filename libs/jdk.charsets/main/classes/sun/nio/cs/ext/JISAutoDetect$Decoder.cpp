#include <sun/nio/cs/ext/JISAutoDetect$Decoder.h>

#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/nio/cs/DelegatableDecoder.h>
#include <sun/nio/cs/ext/JISAutoDetect.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $DelegatableDecoder = ::sun::nio::cs::DelegatableDecoder;
using $JISAutoDetect = ::sun::nio::cs::ext::JISAutoDetect;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class JISAutoDetect$Decoder$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(JISAutoDetect$Decoder$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(JISAutoDetect$Decoder::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JISAutoDetect$Decoder$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JISAutoDetect$Decoder$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JISAutoDetect$Decoder$$Lambda$lambda$static$0::*)()>(&JISAutoDetect$Decoder$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JISAutoDetect$Decoder$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.nio.cs.ext.JISAutoDetect$Decoder$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* JISAutoDetect$Decoder$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(JISAutoDetect$Decoder$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JISAutoDetect$Decoder$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _JISAutoDetect$Decoder_FieldInfo_[] = {
	{"osName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JISAutoDetect$Decoder, osName)},
	{"SJISName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JISAutoDetect$Decoder, SJISName)},
	{"EUCJPName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JISAutoDetect$Decoder, EUCJPName)},
	{"detectedDecoder", "Lsun/nio/cs/DelegatableDecoder;", nullptr, $PRIVATE, $field(JISAutoDetect$Decoder, detectedDecoder)},
	{}
};

$MethodInfo _JISAutoDetect$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(JISAutoDetect$Decoder::*)($Charset*)>(&JISAutoDetect$Decoder::init$))},
	{"copyLeadingASCII", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ByteBuffer*,$CharBuffer*)>(&JISAutoDetect$Decoder::copyLeadingASCII))},
	{"decodeLoop", "(Lsun/nio/cs/DelegatableDecoder;Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(JISAutoDetect$Decoder::*)($DelegatableDecoder*,$ByteBuffer*,$CharBuffer*)>(&JISAutoDetect$Decoder::decodeLoop))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"detectedCharset", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC},
	{"getSJISName", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&JISAutoDetect$Decoder::getSJISName))},
	{"implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{"isAutoDetecting", "()Z", nullptr, $PUBLIC},
	{"isCharsetDetected", "()Z", nullptr, $PUBLIC},
	{"isPlainASCII", "(B)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int8_t)>(&JISAutoDetect$Decoder::isPlainASCII))},
	{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&JISAutoDetect$Decoder::lambda$static$0))},
	{}
};

$InnerClassInfo _JISAutoDetect$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.JISAutoDetect$Decoder", "sun.nio.cs.ext.JISAutoDetect", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JISAutoDetect$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.JISAutoDetect$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_JISAutoDetect$Decoder_FieldInfo_,
	_JISAutoDetect$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_JISAutoDetect$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.JISAutoDetect"
};

$Object* allocate$JISAutoDetect$Decoder($Class* clazz) {
	return $of($alloc(JISAutoDetect$Decoder));
}

$String* JISAutoDetect$Decoder::osName = nullptr;
$String* JISAutoDetect$Decoder::SJISName = nullptr;
$String* JISAutoDetect$Decoder::EUCJPName = nullptr;

void JISAutoDetect$Decoder::init$($Charset* cs) {
	$CharsetDecoder::init$(cs, 0.5f, 1.0f);
	$set(this, detectedDecoder, nullptr);
}

bool JISAutoDetect$Decoder::isPlainASCII(int8_t b) {
	$init(JISAutoDetect$Decoder);
	return b >= 0 && b != 27;
}

void JISAutoDetect$Decoder::copyLeadingASCII($ByteBuffer* src, $CharBuffer* dst) {
	$init(JISAutoDetect$Decoder);
	int32_t start = $nc(src)->position();
	int32_t var$0 = start;
	int32_t var$2 = src->remaining();
	int32_t var$1 = $Math::min(var$2, $nc(dst)->remaining());
	int32_t limit = var$0 + var$1;
	int32_t p = 0;
	int8_t b = 0;
	for (p = start; p < limit && isPlainASCII(b = src->get(p)); ++p) {
		$nc(dst)->put((char16_t)((int32_t)(b & (uint32_t)255)));
	}
	src->position(p);
}

$CoderResult* JISAutoDetect$Decoder::decodeLoop($DelegatableDecoder* decoder, $ByteBuffer* src, $CharBuffer* dst) {
	$nc(($cast($CharsetDecoder, decoder)))->reset();
	$set(this, detectedDecoder, decoder);
	return $nc(this->detectedDecoder)->decodeLoop(src, dst);
}

$CoderResult* JISAutoDetect$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	if (this->detectedDecoder == nullptr) {
		copyLeadingASCII(src, dst);
		if (!$nc(src)->hasRemaining()) {
			$init($CoderResult);
			return $CoderResult::UNDERFLOW;
		}
		bool var$0 = !$nc(dst)->hasRemaining();
		if (var$0 && isPlainASCII($nc(src)->get(src->position()))) {
			$init($CoderResult);
			return $CoderResult::OVERFLOW;
		}
		int32_t var$1 = $nc(src)->limit();
		int32_t cbufsiz = $cast(int32_t, (var$1 * (double)maxCharsPerByte()));
		$var($CharBuffer, sandbox, $CharBuffer::allocate(cbufsiz));
		$var($Charset, cs2022, $Charset::forName("ISO-2022-JP"_s));
		$var($DelegatableDecoder, dd2022, $cast($DelegatableDecoder, $nc(cs2022)->newDecoder()));
		$var($ByteBuffer, src2022, src->asReadOnlyBuffer());
		$var($CoderResult, res2022, $nc(dd2022)->decodeLoop(src2022, sandbox));
		if (!$nc(res2022)->isError()) {
			return decodeLoop(dd2022, src, dst);
		}
		$var($Charset, csEUCJ, $Charset::forName(JISAutoDetect$Decoder::EUCJPName));
		$var($Charset, csSJIS, $Charset::forName(JISAutoDetect$Decoder::SJISName));
		$var($DelegatableDecoder, ddEUCJ, $cast($DelegatableDecoder, $nc(csEUCJ)->newDecoder()));
		$var($DelegatableDecoder, ddSJIS, $cast($DelegatableDecoder, $nc(csSJIS)->newDecoder()));
		$var($ByteBuffer, srcEUCJ, src->asReadOnlyBuffer());
		$nc(sandbox)->clear();
		$var($CoderResult, resEUCJ, $nc(ddEUCJ)->decodeLoop(srcEUCJ, sandbox));
		if ($nc(resEUCJ)->isError()) {
			return decodeLoop(ddSJIS, src, dst);
		}
		$var($ByteBuffer, srcSJIS, src->asReadOnlyBuffer());
		$var($CharBuffer, sandboxSJIS, $CharBuffer::allocate(cbufsiz));
		$var($CoderResult, resSJIS, $nc(ddSJIS)->decodeLoop(srcSJIS, sandboxSJIS));
		if ($nc(resSJIS)->isError()) {
			return decodeLoop(ddEUCJ, src, dst);
		}
		int32_t var$2 = $nc(srcEUCJ)->position();
		if (var$2 > $nc(srcSJIS)->position()) {
			return decodeLoop(ddEUCJ, src, dst);
		}
		int32_t var$3 = $nc(srcEUCJ)->position();
		if (var$3 < $nc(srcSJIS)->position()) {
			return decodeLoop(ddSJIS, src, dst);
		}
		int32_t var$4 = src->position();
		if (var$4 == $nc(srcEUCJ)->position()) {
			return $CoderResult::UNDERFLOW;
		}
		sandbox->flip();
		return decodeLoop($JISAutoDetect::looksLikeJapanese(sandbox) ? ddEUCJ : ddSJIS, src, dst);
	}
	return $nc(this->detectedDecoder)->decodeLoop(src, dst);
}

void JISAutoDetect$Decoder::implReset() {
	$set(this, detectedDecoder, nullptr);
}

$CoderResult* JISAutoDetect$Decoder::implFlush($CharBuffer* out) {
	if (this->detectedDecoder != nullptr) {
		return $nc(this->detectedDecoder)->implFlush(out);
	} else {
		return $CharsetDecoder::implFlush(out);
	}
}

bool JISAutoDetect$Decoder::isAutoDetecting() {
	return true;
}

bool JISAutoDetect$Decoder::isCharsetDetected() {
	return this->detectedDecoder != nullptr;
}

$Charset* JISAutoDetect$Decoder::detectedCharset() {
	if (this->detectedDecoder == nullptr) {
		$throwNew($IllegalStateException, "charset not yet detected"_s);
	}
	return $nc(($cast($CharsetDecoder, this->detectedDecoder)))->charset();
}

$String* JISAutoDetect$Decoder::getSJISName() {
	$init(JISAutoDetect$Decoder);
	if ($nc(JISAutoDetect$Decoder::osName)->startsWith("Windows"_s)) {
		return ("windows-31J"_s);
	} else {
		return ("Shift_JIS"_s);
	}
}

$String* JISAutoDetect$Decoder::lambda$static$0() {
	$init(JISAutoDetect$Decoder);
	return $System::getProperty("os.name"_s);
}

void clinit$JISAutoDetect$Decoder($Class* class$) {
	$assignStatic(JISAutoDetect$Decoder::EUCJPName, "EUC_JP"_s);
	$beforeCallerSensitive();
	$assignStatic(JISAutoDetect$Decoder::osName, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(JISAutoDetect$Decoder$$Lambda$lambda$static$0)))));
	$assignStatic(JISAutoDetect$Decoder::SJISName, JISAutoDetect$Decoder::getSJISName());
}

JISAutoDetect$Decoder::JISAutoDetect$Decoder() {
}

$Class* JISAutoDetect$Decoder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JISAutoDetect$Decoder$$Lambda$lambda$static$0::classInfo$.name)) {
			return JISAutoDetect$Decoder$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(JISAutoDetect$Decoder, name, initialize, &_JISAutoDetect$Decoder_ClassInfo_, clinit$JISAutoDetect$Decoder, allocate$JISAutoDetect$Decoder);
	return class$;
}

$Class* JISAutoDetect$Decoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun