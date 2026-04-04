#include <sun/awt/AWTCharset$Encoder.h>
#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <sun/awt/AWTCharset.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $AWTCharset = ::sun::awt::AWTCharset;

namespace sun {
	namespace awt {

void AWTCharset$Encoder::init$($AWTCharset* this$0) {
	AWTCharset$Encoder::init$(this$0, $($nc(this$0->javaCs)->newEncoder()));
}

void AWTCharset$Encoder::init$($AWTCharset* this$0, $CharsetEncoder* enc) {
	$set(this, this$0, this$0);
	$var($Charset, var$0, this$0->awtCs);
	float var$1 = $nc(enc)->averageBytesPerChar();
	$CharsetEncoder::init$(var$0, var$1, enc->maxBytesPerChar());
	$set(this, enc, enc);
}

bool AWTCharset$Encoder::canEncode(char16_t c) {
	return $nc(this->enc)->canEncode(c);
}

bool AWTCharset$Encoder::canEncode($CharSequence* cs) {
	return $nc(this->enc)->canEncode(cs);
}

$CoderResult* AWTCharset$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	return $nc(this->enc)->encode(src, dst, true);
}

$CoderResult* AWTCharset$Encoder::implFlush($ByteBuffer* out) {
	return $nc(this->enc)->flush(out);
}

void AWTCharset$Encoder::implReset() {
	$nc(this->enc)->reset();
}

void AWTCharset$Encoder::implReplaceWith($bytes* newReplacement) {
	if (this->enc != nullptr) {
		this->enc->replaceWith(newReplacement);
	}
}

void AWTCharset$Encoder::implOnMalformedInput($CodingErrorAction* newAction) {
	$nc(this->enc)->onMalformedInput(newAction);
}

void AWTCharset$Encoder::implOnUnmappableCharacter($CodingErrorAction* newAction) {
	$nc(this->enc)->onUnmappableCharacter(newAction);
}

bool AWTCharset$Encoder::isLegalReplacement($bytes* repl) {
	return true;
}

AWTCharset$Encoder::AWTCharset$Encoder() {
}

$Class* AWTCharset$Encoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/AWTCharset;", nullptr, $FINAL | $SYNTHETIC, $field(AWTCharset$Encoder, this$0)},
		{"enc", "Ljava/nio/charset/CharsetEncoder;", nullptr, $PROTECTED, $field(AWTCharset$Encoder, enc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/AWTCharset;)V", nullptr, $PROTECTED, $method(AWTCharset$Encoder, init$, void, $AWTCharset*)},
		{"<init>", "(Lsun/awt/AWTCharset;Ljava/nio/charset/CharsetEncoder;)V", nullptr, $PROTECTED, $method(AWTCharset$Encoder, init$, void, $AWTCharset*, $CharsetEncoder*)},
		{"canEncode", "(C)Z", nullptr, $PUBLIC, $virtualMethod(AWTCharset$Encoder, canEncode, bool, char16_t)},
		{"canEncode", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC, $virtualMethod(AWTCharset$Encoder, canEncode, bool, $CharSequence*)},
		{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Encoder, encodeLoop, $CoderResult*, $CharBuffer*, $ByteBuffer*)},
		{"implFlush", "(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Encoder, implFlush, $CoderResult*, $ByteBuffer*)},
		{"implOnMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)V", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Encoder, implOnMalformedInput, void, $CodingErrorAction*)},
		{"implOnUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)V", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Encoder, implOnUnmappableCharacter, void, $CodingErrorAction*)},
		{"implReplaceWith", "([B)V", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Encoder, implReplaceWith, void, $bytes*)},
		{"implReset", "()V", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Encoder, implReset, void)},
		{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC, $virtualMethod(AWTCharset$Encoder, isLegalReplacement, bool, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTCharset$Encoder", "sun.awt.AWTCharset", "Encoder", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.AWTCharset$Encoder",
		"java.nio.charset.CharsetEncoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AWTCharset"
	};
	$loadClass(AWTCharset$Encoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTCharset$Encoder);
	});
	return class$;
}

$Class* AWTCharset$Encoder::class$ = nullptr;

	} // awt
} // sun