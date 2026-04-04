#include <sun/awt/FontDescriptor.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStreamWriter.h>
#include <java/lang/Cloneable.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/AccessController.h>
#include <sun/awt/NativeLibLoader.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef UTF_16BE
#undef UTF_16LE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AccessController = ::java::security::AccessController;
using $NativeLibLoader = ::sun::awt::NativeLibLoader;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {

bool FontDescriptor::isLE = false;

void FontDescriptor::init$($String* nativeName, $CharsetEncoder* encoder, $ints* exclusionRanges) {
	$useLocalObjectStack();
	$set(this, nativeName, nativeName);
	$set(this, encoder, encoder);
	$set(this, exclusionRanges, exclusionRanges);
	this->useUnicode$ = false;
	$var($Charset, cs, $nc(encoder)->charset());
	try {
		$var($OutputStreamWriter, osw, $new($OutputStreamWriter, $$new($ByteArrayOutputStream), cs));
		$set(this, charsetName, osw->getEncoding());
		osw->close();
	} catch ($IOException& ioe) {
	}
}

$String* FontDescriptor::getNativeName() {
	return this->nativeName;
}

$CharsetEncoder* FontDescriptor::getFontCharsetEncoder() {
	return this->encoder;
}

$String* FontDescriptor::getFontCharsetName() {
	return this->charsetName;
}

$ints* FontDescriptor::getExclusionRanges() {
	return this->exclusionRanges;
}

bool FontDescriptor::isExcluded(char16_t ch) {
	for (int32_t i = 0; i < $nc(this->exclusionRanges)->length;) {
		int32_t lo = (this->exclusionRanges->get(i++));
		int32_t up = (this->exclusionRanges->get(i++));
		if (ch >= lo && ch <= up) {
			return true;
		}
	}
	return false;
}

$String* FontDescriptor::toString() {
	return $str({$($Cloneable::toString()), " ["_s, this->nativeName, "|"_s, this->encoder, "]"_s});
}

void FontDescriptor::initIDs() {
	$init(FontDescriptor);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

bool FontDescriptor::useUnicode() {
	if (this->useUnicode$ && this->unicodeEncoder == nullptr) {
		try {
			$init($StandardCharsets);
			$set(this, unicodeEncoder, FontDescriptor::isLE ? $nc($StandardCharsets::UTF_16LE)->newEncoder() : $nc($StandardCharsets::UTF_16BE)->newEncoder());
		} catch ($IllegalArgumentException& x) {
		}
	}
	return this->useUnicode$;
}

void FontDescriptor::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$NativeLibLoader::loadLibraries();
		FontDescriptor::initIDs();
	}
	{
		$var($String, enc, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "sun.io.unicode.encoding"_s, "UnicodeBig"_s))));
		FontDescriptor::isLE = !"UnicodeBig"_s->equals(enc);
	}
}

FontDescriptor::FontDescriptor() {
}

$Class* FontDescriptor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"nativeName", "Ljava/lang/String;", nullptr, 0, $field(FontDescriptor, nativeName)},
		{"encoder", "Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $field(FontDescriptor, encoder)},
		{"charsetName", "Ljava/lang/String;", nullptr, 0, $field(FontDescriptor, charsetName)},
		{"exclusionRanges", "[I", nullptr, $PRIVATE, $field(FontDescriptor, exclusionRanges)},
		{"unicodeEncoder", "Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $field(FontDescriptor, unicodeEncoder)},
		{"useUnicode", "Z", nullptr, 0, $field(FontDescriptor, useUnicode$)},
		{"isLE", "Z", nullptr, $STATIC, $staticField(FontDescriptor, isLE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/nio/charset/CharsetEncoder;[I)V", nullptr, $PUBLIC, $method(FontDescriptor, init$, void, $String*, $CharsetEncoder*, $ints*)},
		{"getExclusionRanges", "()[I", nullptr, $PUBLIC, $virtualMethod(FontDescriptor, getExclusionRanges, $ints*)},
		{"getFontCharsetEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(FontDescriptor, getFontCharsetEncoder, $CharsetEncoder*)},
		{"getFontCharsetName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FontDescriptor, getFontCharsetName, $String*)},
		{"getNativeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FontDescriptor, getNativeName, $String*)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FontDescriptor, initIDs, void)},
		{"isExcluded", "(C)Z", nullptr, $PUBLIC, $virtualMethod(FontDescriptor, isExcluded, bool, char16_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FontDescriptor, toString, $String*)},
		{"useUnicode", "()Z", nullptr, $PUBLIC, $virtualMethod(FontDescriptor, useUnicode, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.FontDescriptor",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FontDescriptor, name, initialize, &classInfo$$, FontDescriptor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FontDescriptor);
	});
	return class$;
}

$Class* FontDescriptor::class$ = nullptr;

	} // awt
} // sun