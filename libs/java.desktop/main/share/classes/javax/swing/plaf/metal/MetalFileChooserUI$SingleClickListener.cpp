#include <javax/swing/plaf/metal/MetalFileChooserUI$SingleClickListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $JList = ::javax::swing::JList;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalFileChooserUI$SingleClickListener::init$($MetalFileChooserUI* this$0, $JList* list) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

MetalFileChooserUI$SingleClickListener::MetalFileChooserUI$SingleClickListener() {
}

$Class* MetalFileChooserUI$SingleClickListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$SingleClickListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;Ljavax/swing/JList;)V", "(Ljavax/swing/JList<*>;)V", $PUBLIC, $method(MetalFileChooserUI$SingleClickListener, init$, void, $MetalFileChooserUI*, $JList*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalFileChooserUI$SingleClickListener", "javax.swing.plaf.metal.MetalFileChooserUI", "SingleClickListener", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalFileChooserUI$SingleClickListener",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalFileChooserUI"
	};
	$loadClass(MetalFileChooserUI$SingleClickListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalFileChooserUI$SingleClickListener));
	});
	return class$;
}

$Class* MetalFileChooserUI$SingleClickListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax