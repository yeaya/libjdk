#include <java/awt/geom/Dimension2D.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

void Dimension2D::init$() {
}

void Dimension2D::setSize(Dimension2D* d) {
	double var$0 = $nc(d)->getWidth();
	setSize(var$0, d->getHeight());
}

$Object* Dimension2D::clone() {
	try {
		return $Cloneable::clone();
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

Dimension2D::Dimension2D() {
}

$Class* Dimension2D::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(Dimension2D, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Dimension2D, clone, $Object*)},
		{"getHeight", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Dimension2D, getHeight, double)},
		{"getWidth", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Dimension2D, getWidth, double)},
		{"setSize", "(DD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Dimension2D, setSize, void, double, double)},
		{"setSize", "(Ljava/awt/geom/Dimension2D;)V", nullptr, $PUBLIC, $virtualMethod(Dimension2D, setSize, void, Dimension2D*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.geom.Dimension2D",
		"java.lang.Object",
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Dimension2D, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Dimension2D);
	});
	return class$;
}

$Class* Dimension2D::class$ = nullptr;

		} // geom
	} // awt
} // java