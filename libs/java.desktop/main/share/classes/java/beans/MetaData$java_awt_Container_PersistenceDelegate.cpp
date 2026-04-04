#include <java/beans/MetaData$java_awt_Container_PersistenceDelegate.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Container = ::java::awt::Container;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JScrollPane = ::javax::swing::JScrollPane;

namespace java {
	namespace beans {

void MetaData$java_awt_Container_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_Container_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalObjectStack();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	if ($instanceOf($JScrollPane, oldInstance)) {
		return;
	}
	$var($Container, oldC, $cast($Container, oldInstance));
	$var($ComponentArray, oldChildren, $nc(oldC)->getComponents());
	$var($Container, newC, $cast($Container, newInstance));
	$var($ComponentArray, newChildren, (newC == nullptr) ? $new($ComponentArray, 0) : newC->getComponents());
	$var($BorderLayout, layout, ($instanceOf($BorderLayout, $(oldC->getLayout()))) ? $cast($BorderLayout, oldC->getLayout()) : ($BorderLayout*)nullptr);
	$var($JLayeredPane, oldLayeredPane, ($instanceOf($JLayeredPane, oldInstance)) ? $cast($JLayeredPane, oldInstance) : ($JLayeredPane*)nullptr);
	for (int32_t i = $nc(newChildren)->length; i < $nc(oldChildren)->length; ++i) {
		$var($ObjectArray, args, (layout != nullptr) ? $new($ObjectArray, {
			oldChildren->get(i),
			$(layout->getConstraints(oldChildren->get(i)))
		}) : (oldLayeredPane != nullptr) ? $new($ObjectArray, {
			oldChildren->get(i),
			$($Integer::valueOf(oldLayeredPane->getLayer(oldChildren->get(i)))),
			$($Integer::valueOf(-1))
		}) : $new($ObjectArray, {oldChildren->get(i)}));
		invokeStatement(oldInstance, "add"_s, args, out);
	}
}

MetaData$java_awt_Container_PersistenceDelegate::MetaData$java_awt_Container_PersistenceDelegate() {
}

$Class* MetaData$java_awt_Container_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_awt_Container_PersistenceDelegate, init$, void)},
		{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED, $virtualMethod(MetaData$java_awt_Container_PersistenceDelegate, initialize, void, $Class*, Object$*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_awt_Container_PersistenceDelegate", "java.beans.MetaData", "java_awt_Container_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_awt_Container_PersistenceDelegate",
		"java.beans.DefaultPersistenceDelegate",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.MetaData"
	};
	$loadClass(MetaData$java_awt_Container_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_awt_Container_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_awt_Container_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java