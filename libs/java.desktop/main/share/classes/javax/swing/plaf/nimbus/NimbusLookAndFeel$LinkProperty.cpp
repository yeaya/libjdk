#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$LinkProperty.h>
#include <javax/swing/UIDefaults$ActiveValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ActiveValue = ::javax::swing::UIDefaults$ActiveValue;
using $UIManager = ::javax::swing::UIManager;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

int32_t NimbusLookAndFeel$LinkProperty::hashCode() {
	 return this->$UIDefaults$ActiveValue::hashCode();
}

bool NimbusLookAndFeel$LinkProperty::equals(Object$* arg0) {
	 return this->$UIDefaults$ActiveValue::equals(arg0);
}

$Object* NimbusLookAndFeel$LinkProperty::clone() {
	 return this->$UIDefaults$ActiveValue::clone();
}

$String* NimbusLookAndFeel$LinkProperty::toString() {
	 return this->$UIDefaults$ActiveValue::toString();
}

void NimbusLookAndFeel$LinkProperty::finalize() {
	this->$UIDefaults$ActiveValue::finalize();
}

void NimbusLookAndFeel$LinkProperty::init$($NimbusLookAndFeel* this$0, $String* dstPropName) {
	$set(this, this$0, this$0);
	$set(this, dstPropName, dstPropName);
}

$Object* NimbusLookAndFeel$LinkProperty::createValue($UIDefaults* table) {
	return $UIManager::get(this->dstPropName);
}

NimbusLookAndFeel$LinkProperty::NimbusLookAndFeel$LinkProperty() {
}

$Class* NimbusLookAndFeel$LinkProperty::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusLookAndFeel$LinkProperty, this$0)},
		{"dstPropName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusLookAndFeel$LinkProperty, dstPropName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(NimbusLookAndFeel$LinkProperty, init$, void, $NimbusLookAndFeel*, $String*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NimbusLookAndFeel$LinkProperty, createValue, $Object*, $UIDefaults*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.NimbusLookAndFeel$LinkProperty", "javax.swing.plaf.nimbus.NimbusLookAndFeel", "LinkProperty", $PRIVATE},
		{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.NimbusLookAndFeel$LinkProperty",
		"java.lang.Object",
		"javax.swing.UIDefaults$ActiveValue,javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.NimbusLookAndFeel"
	};
	$loadClass(NimbusLookAndFeel$LinkProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(NimbusLookAndFeel$LinkProperty));
	});
	return class$;
}

$Class* NimbusLookAndFeel$LinkProperty::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax