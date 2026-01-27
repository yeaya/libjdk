#include <sun/font/TextSource.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <sun/font/CoreMetrics.h>
#include <jcpp.h>

#undef WITHOUT_CONTEXT
#undef WITH_CONTEXT

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CoreMetrics = ::sun::font::CoreMetrics;

namespace sun {
	namespace font {

$FieldInfo _TextSource_FieldInfo_[] = {
	{"WITHOUT_CONTEXT", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextSource, WITHOUT_CONTEXT)},
	{"WITH_CONTEXT", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextSource, WITH_CONTEXT)},
	{}
};

$MethodInfo _TextSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TextSource, init$, void)},
	{"getBidiLevel", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, getBidiLevel, int32_t)},
	{"getChars", "()[C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, getChars, $chars*)},
	{"getContextLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, getContextLength, int32_t)},
	{"getContextStart", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, getContextStart, int32_t)},
	{"getCoreMetrics", "()Lsun/font/CoreMetrics;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, getCoreMetrics, $CoreMetrics*)},
	{"getFRC", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, getFRC, $FontRenderContext*)},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, getFont, $Font*)},
	{"getLayoutFlags", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, getLayoutFlags, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, getLength, int32_t)},
	{"getStart", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, getStart, int32_t)},
	{"getSubSource", "(III)Lsun/font/TextSource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, getSubSource, TextSource*, int32_t, int32_t, int32_t)},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextSource, toString, $String*, bool)},
	{}
};

$ClassInfo _TextSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.TextSource",
	"java.lang.Object",
	nullptr,
	_TextSource_FieldInfo_,
	_TextSource_MethodInfo_
};

$Object* allocate$TextSource($Class* clazz) {
	return $of($alloc(TextSource));
}

void TextSource::init$() {
}

TextSource::TextSource() {
}

$Class* TextSource::load$($String* name, bool initialize) {
	$loadClass(TextSource, name, initialize, &_TextSource_ClassInfo_, allocate$TextSource);
	return class$;
}

$Class* TextSource::class$ = nullptr;

	} // font
} // sun