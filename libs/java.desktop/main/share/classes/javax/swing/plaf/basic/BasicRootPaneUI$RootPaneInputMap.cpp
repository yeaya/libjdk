#include <javax/swing/plaf/basic/BasicRootPaneUI$RootPaneInputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentInputMapUIResource.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentInputMapUIResource = ::javax::swing::plaf::ComponentInputMapUIResource;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicRootPaneUI$RootPaneInputMap::init$($JComponent* c) {
	$ComponentInputMapUIResource::init$(c);
}

BasicRootPaneUI$RootPaneInputMap::BasicRootPaneUI$RootPaneInputMap() {
}

$Class* BasicRootPaneUI$RootPaneInputMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(BasicRootPaneUI$RootPaneInputMap, init$, void, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicRootPaneUI$RootPaneInputMap", "javax.swing.plaf.basic.BasicRootPaneUI", "RootPaneInputMap", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicRootPaneUI$RootPaneInputMap",
		"javax.swing.plaf.ComponentInputMapUIResource",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicRootPaneUI"
	};
	$loadClass(BasicRootPaneUI$RootPaneInputMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicRootPaneUI$RootPaneInputMap));
	});
	return class$;
}

$Class* BasicRootPaneUI$RootPaneInputMap::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax