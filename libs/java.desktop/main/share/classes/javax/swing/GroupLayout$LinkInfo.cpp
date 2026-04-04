#include <javax/swing/GroupLayout$LinkInfo.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/GroupLayout$ComponentInfo.h>
#include <javax/swing/GroupLayout$ComponentSpring.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$ComponentInfo = ::javax::swing::GroupLayout$ComponentInfo;
using $GroupLayout$ComponentSpring = ::javax::swing::GroupLayout$ComponentSpring;

namespace javax {
	namespace swing {

bool GroupLayout$LinkInfo::$assertionsDisabled = false;

void GroupLayout$LinkInfo::init$(int32_t axis) {
	$set(this, linked, $new($ArrayList));
	this->size = (int32_t)0x80000000;
	this->axis = axis;
}

void GroupLayout$LinkInfo::add($GroupLayout$ComponentInfo* child) {
	$useLocalObjectStack();
	$var(GroupLayout$LinkInfo, childMaster, $nc(child)->getLinkInfo(this->axis, false));
	if (childMaster == nullptr) {
		this->linked->add(child);
		child->setLinkInfo(this->axis, this);
	} else if (childMaster != this) {
		this->linked->addAll(childMaster->linked);
		{
			$var($Iterator, i$, $nc(childMaster->linked)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($GroupLayout$ComponentInfo, childInfo, $cast($GroupLayout$ComponentInfo, i$->next()));
				{
					$nc(childInfo)->setLinkInfo(this->axis, this);
				}
			}
		}
	}
	clearCachedSize();
}

void GroupLayout$LinkInfo::remove($GroupLayout$ComponentInfo* info) {
	this->linked->remove(info);
	$nc(info)->setLinkInfo(this->axis, nullptr);
	if (this->linked->size() == 1) {
		$$sure($GroupLayout$ComponentInfo, this->linked->get(0))->setLinkInfo(this->axis, nullptr);
	}
	clearCachedSize();
}

void GroupLayout$LinkInfo::clearCachedSize() {
	this->size = (int32_t)0x80000000;
}

int32_t GroupLayout$LinkInfo::getSize(int32_t axis) {
	if (this->size == (int32_t)0x80000000) {
		this->size = calculateLinkedSize(axis);
	}
	return this->size;
}

int32_t GroupLayout$LinkInfo::calculateLinkedSize(int32_t axis) {
	$useLocalObjectStack();
	int32_t size = 0;
	{
		$var($Iterator, i$, this->linked->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GroupLayout$ComponentInfo, info, $cast($GroupLayout$ComponentInfo, i$->next()));
			{
				$var($GroupLayout$ComponentSpring, spring, nullptr);
				if (axis == 0) {
					$assign(spring, $nc(info)->horizontalSpring);
				} else {
					if (!GroupLayout$LinkInfo::$assertionsDisabled && !(axis == 1)) {
						$throwNew($AssertionError);
					}
					$assign(spring, $nc(info)->verticalSpring);
				}
				size = $Math::max(size, $nc(spring)->calculateNonlinkedPreferredSize(axis));
			}
		}
	}
	return size;
}

void GroupLayout$LinkInfo::clinit$($Class* clazz) {
	$load($GroupLayout);
	GroupLayout$LinkInfo::$assertionsDisabled = !$GroupLayout::class$->desiredAssertionStatus();
}

GroupLayout$LinkInfo::GroupLayout$LinkInfo() {
}

$Class* GroupLayout$LinkInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupLayout$LinkInfo, $assertionsDisabled)},
		{"axis", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$LinkInfo, axis)},
		{"linked", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/GroupLayout$ComponentInfo;>;", $PRIVATE | $FINAL, $field(GroupLayout$LinkInfo, linked)},
		{"size", "I", nullptr, $PRIVATE, $field(GroupLayout$LinkInfo, size)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(GroupLayout$LinkInfo, init$, void, int32_t)},
		{"add", "(Ljavax/swing/GroupLayout$ComponentInfo;)V", nullptr, $PUBLIC, $virtualMethod(GroupLayout$LinkInfo, add, void, $GroupLayout$ComponentInfo*)},
		{"calculateLinkedSize", "(I)I", nullptr, $PRIVATE, $method(GroupLayout$LinkInfo, calculateLinkedSize, int32_t, int32_t)},
		{"clearCachedSize", "()V", nullptr, $PUBLIC, $virtualMethod(GroupLayout$LinkInfo, clearCachedSize, void)},
		{"getSize", "(I)I", nullptr, $PUBLIC, $virtualMethod(GroupLayout$LinkInfo, getSize, int32_t, int32_t)},
		{"remove", "(Ljavax/swing/GroupLayout$ComponentInfo;)V", nullptr, $PUBLIC, $virtualMethod(GroupLayout$LinkInfo, remove, void, $GroupLayout$ComponentInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.GroupLayout$LinkInfo", "javax.swing.GroupLayout", "LinkInfo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.GroupLayout$LinkInfo",
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
		"javax.swing.GroupLayout"
	};
	$loadClass(GroupLayout$LinkInfo, name, initialize, &classInfo$$, GroupLayout$LinkInfo::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GroupLayout$LinkInfo);
	});
	return class$;
}

$Class* GroupLayout$LinkInfo::class$ = nullptr;

	} // swing
} // javax