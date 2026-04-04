#include <javax/swing/JTree$DropLocation.h>
#include <java/awt/Point.h>
#include <javax/swing/JTree.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {

void JTree$DropLocation::init$($Point* p, $TreePath* path, int32_t index) {
	$TransferHandler$DropLocation::init$(p);
	$set(this, path, path);
	this->index = index;
}

int32_t JTree$DropLocation::getChildIndex() {
	return this->index;
}

$TreePath* JTree$DropLocation::getPath() {
	return this->path;
}

$String* JTree$DropLocation::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[dropPoint="_s);
	var$0->append($(getDropPoint()));
	var$0->append(",path="_s);
	var$0->append(this->path);
	var$0->append(",childIndex="_s);
	var$0->append(this->index);
	var$0->append("]"_s);
	return $str(var$0);
}

JTree$DropLocation::JTree$DropLocation() {
}

$Class* JTree$DropLocation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"path", "Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE | $FINAL, $field(JTree$DropLocation, path)},
		{"index", "I", nullptr, $PRIVATE | $FINAL, $field(JTree$DropLocation, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Point;Ljavax/swing/tree/TreePath;I)V", nullptr, $PRIVATE, $method(JTree$DropLocation, init$, void, $Point*, $TreePath*, int32_t)},
		{"getChildIndex", "()I", nullptr, $PUBLIC, $method(JTree$DropLocation, getChildIndex, int32_t)},
		{"getPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC, $method(JTree$DropLocation, getPath, $TreePath*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTree$DropLocation, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTree$DropLocation", "javax.swing.JTree", "DropLocation", $PUBLIC | $STATIC | $FINAL},
		{"javax.swing.TransferHandler$DropLocation", "javax.swing.TransferHandler", "DropLocation", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.swing.JTree$DropLocation",
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
		"javax.swing.JTree"
	};
	$loadClass(JTree$DropLocation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTree$DropLocation);
	});
	return class$;
}

$Class* JTree$DropLocation::class$ = nullptr;

	} // swing
} // javax