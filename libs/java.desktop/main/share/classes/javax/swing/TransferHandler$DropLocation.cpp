#include <javax/swing/TransferHandler$DropLocation.h>
#include <java/awt/Point.h>
#include <javax/swing/TransferHandler.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

void TransferHandler$DropLocation::init$($Point* dropPoint) {
	if (dropPoint == nullptr) {
		$throwNew($IllegalArgumentException, "Point cannot be null"_s);
	}
	$set(this, dropPoint, $new($Point, dropPoint));
}

$Point* TransferHandler$DropLocation::getDropPoint() {
	return $new($Point, this->dropPoint);
}

$String* TransferHandler$DropLocation::toString() {
	return $str({$($of(this)->getClass()->getName()), "[dropPoint="_s, this->dropPoint, "]"_s});
}

TransferHandler$DropLocation::TransferHandler$DropLocation() {
}

$Class* TransferHandler$DropLocation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dropPoint", "Ljava/awt/Point;", nullptr, $PRIVATE | $FINAL, $field(TransferHandler$DropLocation, dropPoint)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Point;)V", nullptr, $PROTECTED, $method(TransferHandler$DropLocation, init$, void, $Point*)},
		{"getDropPoint", "()Ljava/awt/Point;", nullptr, $PUBLIC | $FINAL, $method(TransferHandler$DropLocation, getDropPoint, $Point*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TransferHandler$DropLocation, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.TransferHandler$DropLocation", "javax.swing.TransferHandler", "DropLocation", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.TransferHandler$DropLocation",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.TransferHandler"
	};
	$loadClass(TransferHandler$DropLocation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransferHandler$DropLocation);
	});
	return class$;
}

$Class* TransferHandler$DropLocation::class$ = nullptr;

	} // swing
} // javax