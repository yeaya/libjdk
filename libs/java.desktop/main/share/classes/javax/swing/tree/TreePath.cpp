#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;

namespace javax {
	namespace swing {
		namespace tree {

void TreePath::init$($ObjectArray* path) {
	if (path == nullptr || path->length == 0) {
		$throwNew($IllegalArgumentException, "path in TreePath must be non null and not empty."_s);
	}
	$set(this, lastPathComponent, $nc(path)->get($nc(path)->length - 1));
	if (this->lastPathComponent == nullptr) {
		$throwNew($IllegalArgumentException, "Last path component must be non-null"_s);
	}
	if (path->length > 1) {
		$set(this, parentPath, $new(TreePath, path, path->length - 1));
	}
}

void TreePath::init$(Object$* lastPathComponent) {
	if (lastPathComponent == nullptr) {
		$throwNew($IllegalArgumentException, "path in TreePath must be non null."_s);
	}
	$set(this, lastPathComponent, lastPathComponent);
	$set(this, parentPath, nullptr);
}

void TreePath::init$(TreePath* parent, Object$* lastPathComponent) {
	if (lastPathComponent == nullptr) {
		$throwNew($IllegalArgumentException, "path in TreePath must be non null."_s);
	}
	$set(this, parentPath, parent);
	$set(this, lastPathComponent, lastPathComponent);
}

void TreePath::init$($ObjectArray* path, int32_t length) {
	$set(this, lastPathComponent, $nc(path)->get(length - 1));
	if (this->lastPathComponent == nullptr) {
		$throwNew($IllegalArgumentException, "Path elements must be non-null"_s);
	}
	if (length > 1) {
		$set(this, parentPath, $new(TreePath, path, length - 1));
	}
}

void TreePath::init$() {
}

$ObjectArray* TreePath::getPath() {
	$useLocalObjectStack();
	int32_t i = getPathCount();
	$var($ObjectArray, result, $new($ObjectArray, i--));
	{
		$var(TreePath, path, this);
		for (; path != nullptr; $assign(path, path->getParentPath())) {
			result->set(i--, $(path->getLastPathComponent()));
		}
	}
	return result;
}

$Object* TreePath::getLastPathComponent() {
	return this->lastPathComponent;
}

int32_t TreePath::getPathCount() {
	int32_t result = 0;
	{
		$var(TreePath, path, this);
		for (; path != nullptr; $assign(path, path->getParentPath())) {
			++result;
		}
	}
	return result;
}

$Object* TreePath::getPathComponent(int32_t index) {
	$useLocalObjectStack();
	int32_t pathLength = getPathCount();
	if (index < 0 || index >= pathLength) {
		$throwNew($IllegalArgumentException, $$str({"Index "_s, $$str(index), " is out of the specified range"_s}));
	}
	$var(TreePath, path, this);
	for (int32_t i = pathLength - 1; i != index; --i) {
		$assign(path, $nc(path)->getParentPath());
	}
	return $nc(path)->getLastPathComponent();
}

bool TreePath::equals(Object$* o) {
	$useLocalObjectStack();
	if ($equals(o, this)) {
		return true;
	}
	if ($instanceOf(TreePath, o)) {
		$var(TreePath, oTreePath, $cast(TreePath, o));
		int32_t var$0 = getPathCount();
		if (var$0 != oTreePath->getPathCount()) {
			return false;
		}
		{
			$var(TreePath, path, this);
			for (; path != nullptr; $assign(path, path->getParentPath())) {
				if (!($$nc(path->getLastPathComponent())->equals($($nc(oTreePath)->getLastPathComponent())))) {
					return false;
				}
				$assign(oTreePath, oTreePath->getParentPath());
			}
		}
		return true;
	}
	return false;
}

int32_t TreePath::hashCode() {
	return $$nc(getLastPathComponent())->hashCode();
}

bool TreePath::isDescendant(TreePath* aTreePath$renamed) {
	$var(TreePath, aTreePath, aTreePath$renamed);
	if (aTreePath == this) {
		return true;
	}
	if (aTreePath != nullptr) {
		int32_t pathLength = getPathCount();
		int32_t oPathLength = aTreePath->getPathCount();
		if (oPathLength < pathLength) {
			return false;
		}
		while (oPathLength-- > pathLength) {
			$assign(aTreePath, $nc(aTreePath)->getParentPath());
		}
		return equals(aTreePath);
	}
	return false;
}

TreePath* TreePath::pathByAddingChild(Object$* child) {
	if (child == nullptr) {
		$throwNew($NullPointerException, "Null child not allowed"_s);
	}
	return $new(TreePath, this, child);
}

TreePath* TreePath::getParentPath() {
	return this->parentPath;
}

$String* TreePath::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, tempSpot, $new($StringBuilder, "["_s));
	for (int32_t counter = 0, maxCounter = getPathCount(); counter < maxCounter; ++counter) {
		if (counter > 0) {
			tempSpot->append(", "_s);
		}
		tempSpot->append($(getPathComponent(counter)));
	}
	tempSpot->append("]"_s);
	return tempSpot->toString();
}

TreePath::TreePath() {
}

$Class* TreePath::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"parentPath", "Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $field(TreePath, parentPath)},
		{"lastPathComponent", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(TreePath, lastPathComponent)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "path"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TreePath, init$, void, $ObjectArray*), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TreePath, init$, void, Object$*)},
		{"<init>", "(Ljavax/swing/tree/TreePath;Ljava/lang/Object;)V", nullptr, $PROTECTED, $method(TreePath, init$, void, TreePath*, Object$*)},
		{"<init>", "([Ljava/lang/Object;I)V", nullptr, $PROTECTED, $method(TreePath, init$, void, $ObjectArray*, int32_t)},
		{"<init>", "()V", nullptr, $PROTECTED, $method(TreePath, init$, void)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TreePath, equals, bool, Object$*)},
		{"getLastPathComponent", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TreePath, getLastPathComponent, $Object*)},
		{"getParentPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC, $virtualMethod(TreePath, getParentPath, TreePath*)},
		{"getPath", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TreePath, getPath, $ObjectArray*)},
		{"getPathComponent", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TreePath, getPathComponent, $Object*, int32_t)},
		{"getPathCount", "()I", nullptr, $PUBLIC, $virtualMethod(TreePath, getPathCount, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(TreePath, hashCode, int32_t)},
		{"isDescendant", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC, $virtualMethod(TreePath, isDescendant, bool, TreePath*)},
		{"pathByAddingChild", "(Ljava/lang/Object;)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC, $virtualMethod(TreePath, pathByAddingChild, TreePath*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TreePath, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.tree.TreePath",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TreePath, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreePath);
	});
	return class$;
}

$Class* TreePath::class$ = nullptr;

		} // tree
	} // swing
} // javax