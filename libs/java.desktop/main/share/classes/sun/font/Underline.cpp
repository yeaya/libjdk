#include <sun/font/Underline.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Shape.h>
#include <java/awt/font/TextAttribute.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/font/Underline$IMGrayUnderline.h>
#include <sun/font/Underline$StandardUnderline.h>
#include <jcpp.h>

#undef DEFAULT_THICKNESS
#undef IGNORE_THICKNESS
#undef UNDERLINES
#undef UNDERLINE_LIST
#undef UNDERLINE_LOW_DASHED
#undef UNDERLINE_LOW_DOTTED
#undef UNDERLINE_LOW_GRAY
#undef UNDERLINE_LOW_ONE_PIXEL
#undef UNDERLINE_LOW_TWO_PIXEL
#undef UNDERLINE_ON
#undef USE_THICKNESS

using $UnderlineArray = $Array<::sun::font::Underline>;
using $Graphics2D = ::java::awt::Graphics2D;
using $Shape = ::java::awt::Shape;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Underline$IMGrayUnderline = ::sun::font::Underline$IMGrayUnderline;
using $Underline$StandardUnderline = ::sun::font::Underline$StandardUnderline;

namespace sun {
	namespace font {

float Underline::DEFAULT_THICKNESS = 0.0;
$ConcurrentHashMap* Underline::UNDERLINES = nullptr;
$UnderlineArray* Underline::UNDERLINE_LIST = nullptr;

void Underline::init$() {
}

Underline* Underline::getUnderline(Object$* value) {
	$init(Underline);
	if (value == nullptr) {
		return nullptr;
	}
	return $cast(Underline, Underline::UNDERLINES->get(value));
}

Underline* Underline::getUnderline(int32_t index) {
	$init(Underline);
	return index < 0 ? (Underline*)nullptr : $nc(Underline::UNDERLINE_LIST)->get(index);
}

void Underline::clinit$($Class* clazz) {
	$useLocalObjectStack();
	Underline::DEFAULT_THICKNESS = 1.0f;
	$assignStatic(Underline::UNDERLINES, $new($ConcurrentHashMap, 6));
	{
		$var($UnderlineArray, uls, $new($UnderlineArray, 6));
		uls->set(0, $$new($Underline$StandardUnderline, 0, 1, nullptr, Underline::USE_THICKNESS));
		$init($TextAttribute);
		Underline::UNDERLINES->put($TextAttribute::UNDERLINE_ON, uls->get(0));
		uls->set(1, $$new($Underline$StandardUnderline, 1, 1, nullptr, Underline::IGNORE_THICKNESS));
		Underline::UNDERLINES->put($TextAttribute::UNDERLINE_LOW_ONE_PIXEL, uls->get(1));
		uls->set(2, $$new($Underline$StandardUnderline, 1, 2, nullptr, Underline::IGNORE_THICKNESS));
		Underline::UNDERLINES->put($TextAttribute::UNDERLINE_LOW_TWO_PIXEL, uls->get(2));
		uls->set(3, $$new($Underline$StandardUnderline, 1, 1, $$new($floats, {
			1,
			1
		}), Underline::IGNORE_THICKNESS));
		Underline::UNDERLINES->put($TextAttribute::UNDERLINE_LOW_DOTTED, uls->get(3));
		uls->set(4, $$new($Underline$IMGrayUnderline));
		Underline::UNDERLINES->put($TextAttribute::UNDERLINE_LOW_GRAY, uls->get(4));
		uls->set(5, $$new($Underline$StandardUnderline, 1, 1, $$new($floats, {
			4,
			4
		}), Underline::IGNORE_THICKNESS));
		Underline::UNDERLINES->put($TextAttribute::UNDERLINE_LOW_DASHED, uls->get(5));
		$assignStatic(Underline::UNDERLINE_LIST, uls);
	}
}

Underline::Underline() {
}

$Class* Underline::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_THICKNESS", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Underline, DEFAULT_THICKNESS)},
		{"USE_THICKNESS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Underline, USE_THICKNESS)},
		{"IGNORE_THICKNESS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Underline, IGNORE_THICKNESS)},
		{"UNDERLINES", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/Object;Lsun/font/Underline;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Underline, UNDERLINES)},
		{"UNDERLINE_LIST", "[Lsun/font/Underline;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Underline, UNDERLINE_LIST)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Underline, init$, void)},
		{"drawUnderline", "(Ljava/awt/Graphics2D;FFFF)V", nullptr, $ABSTRACT, $virtualMethod(Underline, drawUnderline, void, $Graphics2D*, float, float, float, float)},
		{"getLowerDrawLimit", "(F)F", nullptr, $ABSTRACT, $virtualMethod(Underline, getLowerDrawLimit, float, float)},
		{"getUnderline", "(Ljava/lang/Object;)Lsun/font/Underline;", nullptr, $STATIC, $staticMethod(Underline, getUnderline, Underline*, Object$*)},
		{"getUnderline", "(I)Lsun/font/Underline;", nullptr, $STATIC, $staticMethod(Underline, getUnderline, Underline*, int32_t)},
		{"getUnderlineShape", "(FFFF)Ljava/awt/Shape;", nullptr, $ABSTRACT, $virtualMethod(Underline, getUnderlineShape, $Shape*, float, float, float, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.Underline$IMGrayUnderline", "sun.font.Underline", "IMGrayUnderline", $PRIVATE | $STATIC},
		{"sun.font.Underline$StandardUnderline", "sun.font.Underline", "StandardUnderline", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.font.Underline",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.font.Underline$IMGrayUnderline,sun.font.Underline$StandardUnderline"
	};
	$loadClass(Underline, name, initialize, &classInfo$$, Underline::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Underline);
	});
	return class$;
}

$Class* Underline::class$ = nullptr;

	} // font
} // sun