#include <java/beans/beancontext/BeanContextSupport$BCSChild.h>
#include <java/beans/beancontext/BeanContextSupport.h>
#include <jcpp.h>

using $BeanContextSupport = ::java::beans::beancontext::BeanContextSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

void BeanContextSupport$BCSChild::init$($BeanContextSupport* this$0, Object$* bcc, Object$* peer) {
	$set(this, this$0, this$0);
	$set(this, child, bcc);
	$set(this, proxyPeer, peer);
}

$Object* BeanContextSupport$BCSChild::getChild() {
	return this->child;
}

void BeanContextSupport$BCSChild::setRemovePending(bool v) {
	this->removePending = v;
}

bool BeanContextSupport$BCSChild::isRemovePending() {
	return this->removePending;
}

bool BeanContextSupport$BCSChild::isProxyPeer() {
	return this->proxyPeer != nullptr;
}

$Object* BeanContextSupport$BCSChild::getProxyPeer() {
	return this->proxyPeer;
}

BeanContextSupport$BCSChild::BeanContextSupport$BCSChild() {
}

$Class* BeanContextSupport$BCSChild::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/beans/beancontext/BeanContextSupport;", nullptr, $FINAL | $SYNTHETIC, $field(BeanContextSupport$BCSChild, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextSupport$BCSChild, serialVersionUID)},
		{"child", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(BeanContextSupport$BCSChild, child)},
		{"proxyPeer", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(BeanContextSupport$BCSChild, proxyPeer)},
		{"removePending", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(BeanContextSupport$BCSChild, removePending)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/beancontext/BeanContextSupport;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(BeanContextSupport$BCSChild, init$, void, $BeanContextSupport*, Object$*, Object$*)},
		{"getChild", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(BeanContextSupport$BCSChild, getChild, $Object*)},
		{"getProxyPeer", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(BeanContextSupport$BCSChild, getProxyPeer, $Object*)},
		{"isProxyPeer", "()Z", nullptr, 0, $virtualMethod(BeanContextSupport$BCSChild, isProxyPeer, bool)},
		{"isRemovePending", "()Z", nullptr, 0, $virtualMethod(BeanContextSupport$BCSChild, isRemovePending, bool)},
		{"setRemovePending", "(Z)V", nullptr, 0, $virtualMethod(BeanContextSupport$BCSChild, setRemovePending, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.beancontext.BeanContextSupport$BCSChild", "java.beans.beancontext.BeanContextSupport", "BCSChild", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.beancontext.BeanContextSupport$BCSChild",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.beancontext.BeanContextSupport"
	};
	$loadClass(BeanContextSupport$BCSChild, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextSupport$BCSChild);
	});
	return class$;
}

$Class* BeanContextSupport$BCSChild::class$ = nullptr;

		} // beancontext
	} // beans
} // java