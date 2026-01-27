#include <javax/swing/GroupLayout$Spring.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/lang/Math.h>
#include <javax/swing/GroupLayout$Alignment.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

#undef OTHER

using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$Alignment = ::javax::swing::GroupLayout$Alignment;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$Spring_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/GroupLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GroupLayout$Spring, this$0)},
	{"size", "I", nullptr, $PRIVATE, $field(GroupLayout$Spring, size)},
	{"min", "I", nullptr, $PRIVATE, $field(GroupLayout$Spring, min)},
	{"max", "I", nullptr, $PRIVATE, $field(GroupLayout$Spring, max)},
	{"pref", "I", nullptr, $PRIVATE, $field(GroupLayout$Spring, pref)},
	{"parent", "Ljavax/swing/GroupLayout$Spring;", nullptr, $PRIVATE, $field(GroupLayout$Spring, parent)},
	{"alignment", "Ljavax/swing/GroupLayout$Alignment;", nullptr, $PRIVATE, $field(GroupLayout$Spring, alignment)},
	{}
};

$MethodInfo _GroupLayout$Spring_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout;)V", nullptr, 0, $method(GroupLayout$Spring, init$, void, $GroupLayout*)},
	{"calculateMaximumSize", "(I)I", nullptr, $ABSTRACT, $virtualMethod(GroupLayout$Spring, calculateMaximumSize, int32_t, int32_t)},
	{"calculateMinimumSize", "(I)I", nullptr, $ABSTRACT, $virtualMethod(GroupLayout$Spring, calculateMinimumSize, int32_t, int32_t)},
	{"calculatePreferredSize", "(I)I", nullptr, $ABSTRACT, $virtualMethod(GroupLayout$Spring, calculatePreferredSize, int32_t, int32_t)},
	{"constrain", "(I)I", nullptr, 0, $virtualMethod(GroupLayout$Spring, constrain, int32_t, int32_t)},
	{"getAlignment", "()Ljavax/swing/GroupLayout$Alignment;", nullptr, 0, $virtualMethod(GroupLayout$Spring, getAlignment, $GroupLayout$Alignment*)},
	{"getBaseline", "()I", nullptr, 0, $virtualMethod(GroupLayout$Spring, getBaseline, int32_t)},
	{"getBaselineResizeBehavior", "()Ljava/awt/Component$BaselineResizeBehavior;", nullptr, 0, $virtualMethod(GroupLayout$Spring, getBaselineResizeBehavior, $Component$BaselineResizeBehavior*)},
	{"getMaximumSize", "(I)I", nullptr, $FINAL, $method(GroupLayout$Spring, getMaximumSize, int32_t, int32_t)},
	{"getMinimumSize", "(I)I", nullptr, $FINAL, $method(GroupLayout$Spring, getMinimumSize, int32_t, int32_t)},
	{"getParent", "()Ljavax/swing/GroupLayout$Spring;", nullptr, 0, $virtualMethod(GroupLayout$Spring, getParent, GroupLayout$Spring*)},
	{"getPreferredSize", "(I)I", nullptr, $FINAL, $method(GroupLayout$Spring, getPreferredSize, int32_t, int32_t)},
	{"getSize", "()I", nullptr, 0, $virtualMethod(GroupLayout$Spring, getSize, int32_t)},
	{"isResizable", "(I)Z", nullptr, $FINAL, $method(GroupLayout$Spring, isResizable, bool, int32_t)},
	{"setAlignment", "(Ljavax/swing/GroupLayout$Alignment;)V", nullptr, 0, $virtualMethod(GroupLayout$Spring, setAlignment, void, $GroupLayout$Alignment*)},
	{"setParent", "(Ljavax/swing/GroupLayout$Spring;)V", nullptr, 0, $virtualMethod(GroupLayout$Spring, setParent, void, GroupLayout$Spring*)},
	{"setSize", "(III)V", nullptr, 0, $virtualMethod(GroupLayout$Spring, setSize, void, int32_t, int32_t, int32_t)},
	{"unset", "()V", nullptr, 0, $virtualMethod(GroupLayout$Spring, unset, void)},
	{"willHaveZeroSize", "(Z)Z", nullptr, $ABSTRACT, $virtualMethod(GroupLayout$Spring, willHaveZeroSize, bool, bool)},
	{}
};

$InnerClassInfo _GroupLayout$Spring_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$Spring", "javax.swing.GroupLayout", "Spring", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _GroupLayout$Spring_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.GroupLayout$Spring",
	"java.lang.Object",
	nullptr,
	_GroupLayout$Spring_FieldInfo_,
	_GroupLayout$Spring_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$Spring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$Spring($Class* clazz) {
	return $of($alloc(GroupLayout$Spring));
}

void GroupLayout$Spring::init$($GroupLayout* this$0) {
	$set(this, this$0, this$0);
	this->min = (this->pref = (this->max = (int32_t)0x80000000));
}

void GroupLayout$Spring::setParent(GroupLayout$Spring* parent) {
	$set(this, parent, parent);
}

GroupLayout$Spring* GroupLayout$Spring::getParent() {
	return this->parent;
}

void GroupLayout$Spring::setAlignment($GroupLayout$Alignment* alignment) {
	$set(this, alignment, alignment);
}

$GroupLayout$Alignment* GroupLayout$Spring::getAlignment() {
	return this->alignment;
}

int32_t GroupLayout$Spring::getMinimumSize(int32_t axis) {
	if (this->min == (int32_t)0x80000000) {
		this->min = constrain(calculateMinimumSize(axis));
	}
	return this->min;
}

int32_t GroupLayout$Spring::getPreferredSize(int32_t axis) {
	if (this->pref == (int32_t)0x80000000) {
		this->pref = constrain(calculatePreferredSize(axis));
	}
	return this->pref;
}

int32_t GroupLayout$Spring::getMaximumSize(int32_t axis) {
	if (this->max == (int32_t)0x80000000) {
		this->max = constrain(calculateMaximumSize(axis));
	}
	return this->max;
}

void GroupLayout$Spring::setSize(int32_t axis, int32_t origin, int32_t size) {
	this->size = size;
	if (size == (int32_t)0x80000000) {
		unset();
	}
}

void GroupLayout$Spring::unset() {
	this->size = (this->min = (this->pref = (this->max = (int32_t)0x80000000)));
}

int32_t GroupLayout$Spring::getSize() {
	return this->size;
}

int32_t GroupLayout$Spring::constrain(int32_t value) {
	return $Math::min(value, 0x3FFFFFFF);
}

int32_t GroupLayout$Spring::getBaseline() {
	return -1;
}

$Component$BaselineResizeBehavior* GroupLayout$Spring::getBaselineResizeBehavior() {
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

bool GroupLayout$Spring::isResizable(int32_t axis) {
	int32_t min = getMinimumSize(axis);
	int32_t pref = getPreferredSize(axis);
	return (min != pref || pref != getMaximumSize(axis));
}

GroupLayout$Spring::GroupLayout$Spring() {
}

$Class* GroupLayout$Spring::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$Spring, name, initialize, &_GroupLayout$Spring_ClassInfo_, allocate$GroupLayout$Spring);
	return class$;
}

$Class* GroupLayout$Spring::class$ = nullptr;

	} // swing
} // javax