#include <javax/swing/JList$DropLocation.h>
#include <java/awt/Point.h>
#include <javax/swing/JList.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;

namespace javax {
	namespace swing {

void JList$DropLocation::init$($Point* p, int32_t index, bool isInsert) {
	$TransferHandler$DropLocation::init$(p);
	this->index = index;
	this->isInsert$ = isInsert;
}

int32_t JList$DropLocation::getIndex() {
	return this->index;
}

bool JList$DropLocation::isInsert() {
	return this->isInsert$;
}

$String* JList$DropLocation::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[dropPoint="_s);
	var$0->append($(getDropPoint()));
	var$0->append(",index="_s);
	var$0->append(this->index);
	var$0->append(",insert="_s);
	var$0->append(this->isInsert$);
	var$0->append("]"_s);
	return $str(var$0);
}

JList$DropLocation::JList$DropLocation() {
}

$Class* JList$DropLocation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $PRIVATE | $FINAL, $field(JList$DropLocation, index)},
		{"isInsert", "Z", nullptr, $PRIVATE | $FINAL, $field(JList$DropLocation, isInsert$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Point;IZ)V", nullptr, $PRIVATE, $method(JList$DropLocation, init$, void, $Point*, int32_t, bool)},
		{"getIndex", "()I", nullptr, $PUBLIC, $method(JList$DropLocation, getIndex, int32_t)},
		{"isInsert", "()Z", nullptr, $PUBLIC, $method(JList$DropLocation, isInsert, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JList$DropLocation, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JList$DropLocation", "javax.swing.JList", "DropLocation", $PUBLIC | $STATIC | $FINAL},
		{"javax.swing.TransferHandler$DropLocation", "javax.swing.TransferHandler", "DropLocation", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.swing.JList$DropLocation",
		"javax.swing.TransferHandler$DropLocation",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JList"
	};
	$loadClass(JList$DropLocation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JList$DropLocation);
	});
	return class$;
}

$Class* JList$DropLocation::class$ = nullptr;

	} // swing
} // javax