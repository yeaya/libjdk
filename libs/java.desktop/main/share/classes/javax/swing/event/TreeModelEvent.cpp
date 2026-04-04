#include <javax/swing/event/TreeModelEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace event {

void TreeModelEvent::init$(Object$* source, $ObjectArray* path, $ints* childIndices, $ObjectArray* children) {
	TreeModelEvent::init$(source, (path == nullptr) ? ($TreePath*)nullptr : $$new($TreePath, path), childIndices, children);
}

void TreeModelEvent::init$(Object$* source, $TreePath* path, $ints* childIndices, $ObjectArray* children) {
	$EventObject::init$(source);
	$set(this, path, path);
	$set(this, childIndices, childIndices);
	$set(this, children, children);
}

void TreeModelEvent::init$(Object$* source, $ObjectArray* path) {
	TreeModelEvent::init$(source, (path == nullptr) ? ($TreePath*)nullptr : $$new($TreePath, path));
}

void TreeModelEvent::init$(Object$* source, $TreePath* path) {
	$EventObject::init$(source);
	$set(this, path, path);
	$set(this, childIndices, $new($ints, 0));
}

$TreePath* TreeModelEvent::getTreePath() {
	return this->path;
}

$ObjectArray* TreeModelEvent::getPath() {
	if (this->path != nullptr) {
		return this->path->getPath();
	}
	return nullptr;
}

$ObjectArray* TreeModelEvent::getChildren() {
	if (this->children != nullptr) {
		int32_t cCount = this->children->length;
		$var($ObjectArray, retChildren, $new($ObjectArray, cCount));
		$System::arraycopy(this->children, 0, retChildren, 0, cCount);
		return retChildren;
	}
	return nullptr;
}

$ints* TreeModelEvent::getChildIndices() {
	if (this->childIndices != nullptr) {
		int32_t cCount = this->childIndices->length;
		$var($ints, retArray, $new($ints, cCount));
		$System::arraycopy(this->childIndices, 0, retArray, 0, cCount);
		return retArray;
	}
	return nullptr;
}

$String* TreeModelEvent::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append(" "_s);
	var$0->append($($Integer::toString(hashCode())));
	sb->append($$str(var$0));
	if (this->path != nullptr) {
		sb->append($$str({" path "_s, this->path}));
	}
	if (this->childIndices != nullptr) {
		sb->append(" indices [ "_s);
		for (int32_t counter = 0; counter < this->childIndices->length; ++counter) {
			sb->append($$str({$($Integer::toString(this->childIndices->get(counter))), " "_s}));
		}
		sb->append("]"_s);
	}
	if (this->children != nullptr) {
		sb->append(" children [ "_s);
		for (int32_t counter = 0; counter < this->children->length; ++counter) {
			sb->append($$str({this->children->get(counter), " "_s}));
		}
		sb->append("]"_s);
	}
	return sb->toString();
}

TreeModelEvent::TreeModelEvent() {
}

$Class* TreeModelEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"path", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(TreeModelEvent, path)},
		{"childIndices", "[I", nullptr, $PROTECTED, $field(TreeModelEvent, childIndices)},
		{"children", "[Ljava/lang/Object;", nullptr, $PROTECTED, $field(TreeModelEvent, children)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;[Ljava/lang/Object;[I[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TreeModelEvent, init$, void, Object$*, $ObjectArray*, $ints*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/Object;Ljavax/swing/tree/TreePath;[I[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TreeModelEvent, init$, void, Object$*, $TreePath*, $ints*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TreeModelEvent, init$, void, Object$*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/Object;Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC, $method(TreeModelEvent, init$, void, Object$*, $TreePath*)},
		{"getChildIndices", "()[I", nullptr, $PUBLIC, $virtualMethod(TreeModelEvent, getChildIndices, $ints*)},
		{"getChildren", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TreeModelEvent, getChildren, $ObjectArray*)},
		{"getPath", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TreeModelEvent, getPath, $ObjectArray*)},
		{"getTreePath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC, $virtualMethod(TreeModelEvent, getTreePath, $TreePath*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TreeModelEvent, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.event.TreeModelEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TreeModelEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeModelEvent);
	});
	return class$;
}

$Class* TreeModelEvent::class$ = nullptr;

		} // event
	} // swing
} // javax