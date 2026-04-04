#include <java/awt/geom/Path2D$Double$TxIterator.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Double.h>
#include <java/awt/geom/Path2D$Iterator.h>
#include <java/awt/geom/Path2D.h>
#include <jcpp.h>

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D$Double = ::java::awt::geom::Path2D$Double;
using $Path2D$Iterator = ::java::awt::geom::Path2D$Iterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

void Path2D$Double$TxIterator::init$($Path2D$Double* p2dd, $AffineTransform* at) {
	$Path2D$Iterator::init$(p2dd);
	$set(this, doubleCoords, $nc(p2dd)->doubleCoords);
	$set(this, affine, at);
}

int32_t Path2D$Double$TxIterator::currentSegment($floats* coords) {
	int32_t type = $nc($nc(this->path)->pointTypes)->get(this->typeIdx);
	$init($Path2D$Iterator);
	int32_t numCoords = $nc($Path2D$Iterator::curvecoords)->get(type);
	if (numCoords > 0) {
		$nc(this->affine)->transform(this->doubleCoords, this->pointIdx, coords, 0, numCoords / 2);
	}
	return type;
}

int32_t Path2D$Double$TxIterator::currentSegment($doubles* coords) {
	int32_t type = $nc($nc(this->path)->pointTypes)->get(this->typeIdx);
	$init($Path2D$Iterator);
	int32_t numCoords = $nc($Path2D$Iterator::curvecoords)->get(type);
	if (numCoords > 0) {
		$nc(this->affine)->transform(this->doubleCoords, this->pointIdx, coords, 0, numCoords / 2);
	}
	return type;
}

Path2D$Double$TxIterator::Path2D$Double$TxIterator() {
}

$Class* Path2D$Double$TxIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"doubleCoords", "[D", nullptr, 0, $field(Path2D$Double$TxIterator, doubleCoords)},
		{"affine", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(Path2D$Double$TxIterator, affine)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/geom/Path2D$Double;Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(Path2D$Double$TxIterator, init$, void, $Path2D$Double*, $AffineTransform*)},
		{"currentSegment", "([F)I", nullptr, $PUBLIC, $virtualMethod(Path2D$Double$TxIterator, currentSegment, int32_t, $floats*)},
		{"currentSegment", "([D)I", nullptr, $PUBLIC, $virtualMethod(Path2D$Double$TxIterator, currentSegment, int32_t, $doubles*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.geom.Path2D$Double", "java.awt.geom.Path2D", "Double", $PUBLIC | $STATIC},
		{"java.awt.geom.Path2D$Double$TxIterator", "java.awt.geom.Path2D$Double", "TxIterator", $STATIC},
		{"java.awt.geom.Path2D$Iterator", "java.awt.geom.Path2D", "Iterator", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.geom.Path2D$Double$TxIterator",
		"java.awt.geom.Path2D$Iterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.geom.Path2D"
	};
	$loadClass(Path2D$Double$TxIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Path2D$Double$TxIterator);
	});
	return class$;
}

$Class* Path2D$Double$TxIterator::class$ = nullptr;

		} // geom
	} // awt
} // java