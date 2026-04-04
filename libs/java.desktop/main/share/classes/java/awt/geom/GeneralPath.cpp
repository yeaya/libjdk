#include <java/awt/geom/GeneralPath.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <jcpp.h>

#undef INIT_SIZE
#undef WIND_NON_ZERO

using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

void GeneralPath::init$() {
	$Path2D$Float::init$($Path2D::WIND_NON_ZERO, $Path2D::INIT_SIZE);
}

void GeneralPath::init$(int32_t rule) {
	$Path2D$Float::init$(rule, $Path2D::INIT_SIZE);
}

void GeneralPath::init$(int32_t rule, int32_t initialCapacity) {
	$Path2D$Float::init$(rule, initialCapacity);
}

void GeneralPath::init$($Shape* s) {
	$Path2D$Float::init$(s, nullptr);
}

void GeneralPath::init$(int32_t windingRule, $bytes* pointTypes, int32_t numTypes, $floats* pointCoords, int32_t numCoords) {
	$Path2D$Float::init$();
	this->windingRule = windingRule;
	$set(this, pointTypes, pointTypes);
	this->numTypes = numTypes;
	$set(this, floatCoords, pointCoords);
	this->numCoords = numCoords;
}

GeneralPath::GeneralPath() {
}

$Class* GeneralPath::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralPath, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GeneralPath, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(GeneralPath, init$, void, int32_t)},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(GeneralPath, init$, void, int32_t, int32_t)},
		{"<init>", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC, $method(GeneralPath, init$, void, $Shape*)},
		{"<init>", "(I[BI[FI)V", nullptr, 0, $method(GeneralPath, init$, void, int32_t, $bytes*, int32_t, $floats*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.geom.Path2D$Float", "java.awt.geom.Path2D", "Float", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.geom.GeneralPath",
		"java.awt.geom.Path2D$Float",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(GeneralPath, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GeneralPath));
	});
	return class$;
}

$Class* GeneralPath::class$ = nullptr;

		} // geom
	} // awt
} // java