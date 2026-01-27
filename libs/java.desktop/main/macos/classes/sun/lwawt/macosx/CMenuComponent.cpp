#include <sun/lwawt/macosx/CMenuComponent.h>

#include <java/awt/Font.h>
#include <java/awt/MenuComponent.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $MenuComponent = ::java::awt::MenuComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CMenuComponent_FieldInfo_[] = {
	{"target", "Ljava/awt/MenuComponent;", nullptr, $PRIVATE | $FINAL, $field(CMenuComponent, target)},
	{}
};

$MethodInfo _CMenuComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/MenuComponent;)V", nullptr, 0, $method(CMenuComponent, init$, void, $MenuComponent*)},
	{"createModel", "()J", nullptr, $ABSTRACT, $virtualMethod(CMenuComponent, createModel, int64_t)},
	{"dispose", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(CMenuComponent, dispose, void)},
	{"getTarget", "()Ljava/awt/MenuComponent;", nullptr, $FINAL, $method(CMenuComponent, getTarget, $MenuComponent*)},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(CMenuComponent, setFont, void, $Font*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CMenuComponent_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.lwawt.macosx.CMenuComponent",
	"sun.lwawt.macosx.CFRetainedResource",
	"java.awt.peer.MenuComponentPeer",
	_CMenuComponent_FieldInfo_,
	_CMenuComponent_MethodInfo_
};

$Object* allocate$CMenuComponent($Class* clazz) {
	return $of($alloc(CMenuComponent));
}

void CMenuComponent::finalize() {
	this->$CFRetainedResource::finalize();
}

int32_t CMenuComponent::hashCode() {
	 return this->$CFRetainedResource::hashCode();
}

bool CMenuComponent::equals(Object$* arg0) {
	 return this->$CFRetainedResource::equals(arg0);
}

$Object* CMenuComponent::clone() {
	 return this->$CFRetainedResource::clone();
}

$String* CMenuComponent::toString() {
	 return this->$CFRetainedResource::toString();
}

void CMenuComponent::init$($MenuComponent* target) {
	$CFRetainedResource::init$(0, true);
	$set(this, target, target);
	setPtr(createModel());
}

$MenuComponent* CMenuComponent::getTarget() {
	return this->target;
}

void CMenuComponent::dispose() {
	$CFRetainedResource::dispose();
	$LWCToolkit::targetDisposedPeer(this->target, this);
}

void CMenuComponent::setFont($Font* f) {
}

CMenuComponent::CMenuComponent() {
}

$Class* CMenuComponent::load$($String* name, bool initialize) {
	$loadClass(CMenuComponent, name, initialize, &_CMenuComponent_ClassInfo_, allocate$CMenuComponent);
	return class$;
}

$Class* CMenuComponent::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun