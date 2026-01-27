#include <javax/swing/GroupLayout$ComponentInfo.h>

#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/lang/AssertionError.h>
#include <java/util/List.h>
#include <javax/swing/GroupLayout$ComponentSpring.h>
#include <javax/swing/GroupLayout$Group.h>
#include <javax/swing/GroupLayout$LinkInfo.h>
#include <javax/swing/GroupLayout$Spring.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$ComponentSpring = ::javax::swing::GroupLayout$ComponentSpring;
using $GroupLayout$Group = ::javax::swing::GroupLayout$Group;
using $GroupLayout$LinkInfo = ::javax::swing::GroupLayout$LinkInfo;
using $GroupLayout$Spring = ::javax::swing::GroupLayout$Spring;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$ComponentInfo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/GroupLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GroupLayout$ComponentInfo, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupLayout$ComponentInfo, $assertionsDisabled)},
	{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(GroupLayout$ComponentInfo, component)},
	{"horizontalSpring", "Ljavax/swing/GroupLayout$ComponentSpring;", nullptr, 0, $field(GroupLayout$ComponentInfo, horizontalSpring)},
	{"verticalSpring", "Ljavax/swing/GroupLayout$ComponentSpring;", nullptr, 0, $field(GroupLayout$ComponentInfo, verticalSpring)},
	{"horizontalMaster", "Ljavax/swing/GroupLayout$LinkInfo;", nullptr, $PRIVATE, $field(GroupLayout$ComponentInfo, horizontalMaster)},
	{"verticalMaster", "Ljavax/swing/GroupLayout$LinkInfo;", nullptr, $PRIVATE, $field(GroupLayout$ComponentInfo, verticalMaster)},
	{"visible", "Z", nullptr, $PRIVATE, $field(GroupLayout$ComponentInfo, visible)},
	{"honorsVisibility", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(GroupLayout$ComponentInfo, honorsVisibility)},
	{}
};

$MethodInfo _GroupLayout$ComponentInfo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout;Ljava/awt/Component;)V", nullptr, 0, $method(GroupLayout$ComponentInfo, init$, void, $GroupLayout*, $Component*)},
	{"clearCachedSize", "()V", nullptr, $PUBLIC, $virtualMethod(GroupLayout$ComponentInfo, clearCachedSize, void)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(GroupLayout$ComponentInfo, dispose, void)},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(GroupLayout$ComponentInfo, getComponent, $Component*)},
	{"getLinkInfo", "(I)Ljavax/swing/GroupLayout$LinkInfo;", nullptr, $PUBLIC, $virtualMethod(GroupLayout$ComponentInfo, getLinkInfo, $GroupLayout$LinkInfo*, int32_t)},
	{"getLinkInfo", "(IZ)Ljavax/swing/GroupLayout$LinkInfo;", nullptr, $PRIVATE, $method(GroupLayout$ComponentInfo, getLinkInfo, $GroupLayout$LinkInfo*, int32_t, bool)},
	{"getLinkSize", "(II)I", nullptr, 0, $virtualMethod(GroupLayout$ComponentInfo, getLinkSize, int32_t, int32_t, int32_t)},
	{"isLinked", "(I)Z", nullptr, $PUBLIC, $virtualMethod(GroupLayout$ComponentInfo, isLinked, bool, int32_t)},
	{"isVisible", "()Z", nullptr, $PUBLIC, $virtualMethod(GroupLayout$ComponentInfo, isVisible, bool)},
	{"removeSpring", "(Ljavax/swing/GroupLayout$Spring;)V", nullptr, $PRIVATE, $method(GroupLayout$ComponentInfo, removeSpring, void, $GroupLayout$Spring*)},
	{"setBounds", "(Ljava/awt/Insets;IZ)V", nullptr, $PUBLIC, $virtualMethod(GroupLayout$ComponentInfo, setBounds, void, $Insets*, int32_t, bool)},
	{"setComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(GroupLayout$ComponentInfo, setComponent, void, $Component*)},
	{"setHonorsVisibility", "(Ljava/lang/Boolean;)V", nullptr, 0, $virtualMethod(GroupLayout$ComponentInfo, setHonorsVisibility, void, $Boolean*)},
	{"setLinkInfo", "(ILjavax/swing/GroupLayout$LinkInfo;)V", nullptr, $PRIVATE, $method(GroupLayout$ComponentInfo, setLinkInfo, void, int32_t, $GroupLayout$LinkInfo*)},
	{"updateVisibility", "()Z", nullptr, 0, $virtualMethod(GroupLayout$ComponentInfo, updateVisibility, bool)},
	{}
};

$InnerClassInfo _GroupLayout$ComponentInfo_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$ComponentInfo", "javax.swing.GroupLayout", "ComponentInfo", $PRIVATE},
	{}
};

$ClassInfo _GroupLayout$ComponentInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.GroupLayout$ComponentInfo",
	"java.lang.Object",
	nullptr,
	_GroupLayout$ComponentInfo_FieldInfo_,
	_GroupLayout$ComponentInfo_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$ComponentInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$ComponentInfo($Class* clazz) {
	return $of($alloc(GroupLayout$ComponentInfo));
}

bool GroupLayout$ComponentInfo::$assertionsDisabled = false;

void GroupLayout$ComponentInfo::init$($GroupLayout* this$0, $Component* component) {
	$set(this, this$0, this$0);
	$set(this, component, component);
	updateVisibility();
}

void GroupLayout$ComponentInfo::dispose() {
	removeSpring(this->horizontalSpring);
	$set(this, horizontalSpring, nullptr);
	removeSpring(this->verticalSpring);
	$set(this, verticalSpring, nullptr);
	if (this->horizontalMaster != nullptr) {
		$nc(this->horizontalMaster)->remove(this);
	}
	if (this->verticalMaster != nullptr) {
		$nc(this->verticalMaster)->remove(this);
	}
}

void GroupLayout$ComponentInfo::setHonorsVisibility($Boolean* honorsVisibility) {
	$set(this, honorsVisibility, honorsVisibility);
}

void GroupLayout$ComponentInfo::removeSpring($GroupLayout$Spring* spring) {
	if (spring != nullptr) {
		$nc($nc(($cast($GroupLayout$Group, $(spring->getParent()))))->springs)->remove($of(spring));
	}
}

bool GroupLayout$ComponentInfo::isVisible() {
	return this->visible;
}

bool GroupLayout$ComponentInfo::updateVisibility() {
	bool honorsVisibility = false;
	if (this->honorsVisibility == nullptr) {
		honorsVisibility = this->this$0->getHonorsVisibility();
	} else {
		honorsVisibility = $nc(this->honorsVisibility)->booleanValue();
	}
	bool newVisible = (honorsVisibility) ? $nc(this->component)->isVisible() : true;
	if (this->visible != newVisible) {
		this->visible = newVisible;
		return true;
	}
	return false;
}

void GroupLayout$ComponentInfo::setBounds($Insets* insets, int32_t parentWidth, bool ltr) {
	int32_t x = $nc(this->horizontalSpring)->getOrigin();
	int32_t w = $nc(this->horizontalSpring)->getSize();
	int32_t y = $nc(this->verticalSpring)->getOrigin();
	int32_t h = $nc(this->verticalSpring)->getSize();
	if (!ltr) {
		x = parentWidth - x - w;
	}
	$nc(this->component)->setBounds(x + $nc(insets)->left, y + insets->top, w, h);
}

void GroupLayout$ComponentInfo::setComponent($Component* component) {
	$set(this, component, component);
	if (this->horizontalSpring != nullptr) {
		$nc(this->horizontalSpring)->setComponent(component);
	}
	if (this->verticalSpring != nullptr) {
		$nc(this->verticalSpring)->setComponent(component);
	}
}

$Component* GroupLayout$ComponentInfo::getComponent() {
	return this->component;
}

bool GroupLayout$ComponentInfo::isLinked(int32_t axis) {
	if (axis == 0) {
		return this->horizontalMaster != nullptr;
	}
	if (!GroupLayout$ComponentInfo::$assertionsDisabled && !(axis == 1)) {
		$throwNew($AssertionError);
	}
	return (this->verticalMaster != nullptr);
}

void GroupLayout$ComponentInfo::setLinkInfo(int32_t axis, $GroupLayout$LinkInfo* linkInfo) {
	if (axis == 0) {
		$set(this, horizontalMaster, linkInfo);
	} else {
		if (!GroupLayout$ComponentInfo::$assertionsDisabled && !(axis == 1)) {
			$throwNew($AssertionError);
		}
		$set(this, verticalMaster, linkInfo);
	}
}

$GroupLayout$LinkInfo* GroupLayout$ComponentInfo::getLinkInfo(int32_t axis) {
	return getLinkInfo(axis, true);
}

$GroupLayout$LinkInfo* GroupLayout$ComponentInfo::getLinkInfo(int32_t axis, bool create) {
	$useLocalCurrentObjectStackCache();
	if (axis == 0) {
		if (this->horizontalMaster == nullptr && create) {
			$$new($GroupLayout$LinkInfo, 0)->add(this);
		}
		return this->horizontalMaster;
	} else {
		if (!GroupLayout$ComponentInfo::$assertionsDisabled && !(axis == 1)) {
			$throwNew($AssertionError);
		}
		if (this->verticalMaster == nullptr && create) {
			$$new($GroupLayout$LinkInfo, 1)->add(this);
		}
		return this->verticalMaster;
	}
}

void GroupLayout$ComponentInfo::clearCachedSize() {
	if (this->horizontalMaster != nullptr) {
		$nc(this->horizontalMaster)->clearCachedSize();
	}
	if (this->verticalMaster != nullptr) {
		$nc(this->verticalMaster)->clearCachedSize();
	}
}

int32_t GroupLayout$ComponentInfo::getLinkSize(int32_t axis, int32_t type) {
	if (axis == 0) {
		return $nc(this->horizontalMaster)->getSize(axis);
	} else {
		if (!GroupLayout$ComponentInfo::$assertionsDisabled && !(axis == 1)) {
			$throwNew($AssertionError);
		}
		return $nc(this->verticalMaster)->getSize(axis);
	}
}

void clinit$GroupLayout$ComponentInfo($Class* class$) {
	$load($GroupLayout);
	GroupLayout$ComponentInfo::$assertionsDisabled = !$GroupLayout::class$->desiredAssertionStatus();
}

GroupLayout$ComponentInfo::GroupLayout$ComponentInfo() {
}

$Class* GroupLayout$ComponentInfo::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$ComponentInfo, name, initialize, &_GroupLayout$ComponentInfo_ClassInfo_, clinit$GroupLayout$ComponentInfo, allocate$GroupLayout$ComponentInfo);
	return class$;
}

$Class* GroupLayout$ComponentInfo::class$ = nullptr;

	} // swing
} // javax