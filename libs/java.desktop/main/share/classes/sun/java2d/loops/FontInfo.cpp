#include <sun/java2d/loops/FontInfo.h>
#include <java/awt/Font.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrike.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace loops {

void FontInfo::init$() {
}

$String* FontInfo::mtx($doubles* matrix) {
	$useLocalObjectStack();
	return ($str({"["_s, $$str($nc(matrix)->get(0)), ", "_s, $$str($nc(matrix)->get(1)), ", "_s, $$str($nc(matrix)->get(2)), ", "_s, $$str($nc(matrix)->get(3)), "]"_s}));
}

$Object* FontInfo::clone() {
	try {
		return $Cloneable::clone();
	} catch ($CloneNotSupportedException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* FontInfo::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("FontInfo[font="_s);
	var$0->append(this->font);
	var$0->append(", devTx="_s);
	var$0->append($(mtx(this->devTx)));
	var$0->append(", glyphTx="_s);
	var$0->append($(mtx(this->glyphTx)));
	var$0->append(", pixelHeight="_s);
	var$0->append(this->pixelHeight);
	var$0->append(", origin=("_s);
	var$0->append(this->originX);
	var$0->append(","_s);
	var$0->append(this->originY);
	var$0->append("), aaHint="_s);
	var$0->append(this->aaHint);
	var$0->append(", lcdRGBOrder="_s);
	var$0->append(this->lcdRGBOrder ? "RGB"_s : "BGR"_s);
	var$0->append("lcdSubPixPos="_s);
	var$0->append(this->lcdSubPixPos);
	var$0->append("]"_s);
	return ($str(var$0));
}

FontInfo::FontInfo() {
}

$Class* FontInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"font", "Ljava/awt/Font;", nullptr, $PUBLIC, $field(FontInfo, font)},
		{"font2D", "Lsun/font/Font2D;", nullptr, $PUBLIC, $field(FontInfo, font2D)},
		{"fontStrike", "Lsun/font/FontStrike;", nullptr, $PUBLIC, $field(FontInfo, fontStrike)},
		{"devTx", "[D", nullptr, $PUBLIC, $field(FontInfo, devTx)},
		{"glyphTx", "[D", nullptr, $PUBLIC, $field(FontInfo, glyphTx)},
		{"nonInvertibleTx", "Z", nullptr, $PUBLIC, $field(FontInfo, nonInvertibleTx)},
		{"pixelHeight", "I", nullptr, $PUBLIC, $field(FontInfo, pixelHeight)},
		{"originX", "F", nullptr, $PUBLIC, $field(FontInfo, originX)},
		{"originY", "F", nullptr, $PUBLIC, $field(FontInfo, originY)},
		{"aaHint", "I", nullptr, $PUBLIC, $field(FontInfo, aaHint)},
		{"lcdRGBOrder", "Z", nullptr, $PUBLIC, $field(FontInfo, lcdRGBOrder)},
		{"lcdSubPixPos", "Z", nullptr, $PUBLIC, $field(FontInfo, lcdSubPixPos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FontInfo, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FontInfo, clone, $Object*)},
		{"mtx", "([D)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FontInfo, mtx, $String*, $doubles*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FontInfo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.FontInfo",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FontInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontInfo);
	});
	return class$;
}

$Class* FontInfo::class$ = nullptr;

		} // loops
	} // java2d
} // sun