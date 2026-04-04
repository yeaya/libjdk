#include <com/apple/laf/ClientPropertyApplicator.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClientPropertyApplicator$PropertyArray = $Array<::com::apple::laf::ClientPropertyApplicator$Property>;
using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

void ClientPropertyApplicator::init$($ClientPropertyApplicator$PropertyArray* propertyList) {
	$useLocalObjectStack();
	$set(this, properties, $new($HashMap));
	{
		$var($ClientPropertyApplicator$PropertyArray, arr$, propertyList);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($ClientPropertyApplicator$Property, p, arr$->get(i$));
			{
				this->properties->put($nc(p)->name, p);
			}
		}
	}
}

void ClientPropertyApplicator::applyProperty(Object$* target, $String* propName, Object$* value) {
	$var($ClientPropertyApplicator$Property, property, $cast($ClientPropertyApplicator$Property, this->properties->get(propName)));
	if (property != nullptr) {
		property->applyProperty(target, value);
	}
}

void ClientPropertyApplicator::attachAndApplyClientProperties($JComponent* target) {
	$useLocalObjectStack();
	$nc(target)->addPropertyChangeListener(this);
	$var($Object, obj, convertJComponentToTarget(target));
	if (obj == nullptr) {
		return;
	}
	$var($Set, propNames, this->properties->keySet());
	{
		$var($Iterator, i$, $nc(propNames)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, propName, $cast($String, i$->next()));
			{
				$var($Object, value, target->getClientProperty(propName));
				if (value == nullptr) {
					continue;
				}
				applyProperty(obj, propName, value);
			}
		}
	}
}

void ClientPropertyApplicator::removeFrom($JComponent* target) {
	$nc(target)->removePropertyChangeListener(this);
}

void ClientPropertyApplicator::propertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	$var($Object, obj, convertJComponentToTarget($$cast($JComponent, $nc(evt)->getSource())));
	if (obj == nullptr) {
		return;
	}
	$var($String, var$0, evt->getPropertyName());
	applyProperty(obj, var$0, $(evt->getNewValue()));
}

$Object* ClientPropertyApplicator::convertJComponentToTarget($JComponent* component) {
	return $of($of(component));
}

ClientPropertyApplicator::ClientPropertyApplicator() {
}

$Class* ClientPropertyApplicator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"properties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/apple/laf/ClientPropertyApplicator$Property<TN;>;>;", $PRIVATE | $FINAL, $field(ClientPropertyApplicator, properties)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Lcom/apple/laf/ClientPropertyApplicator$Property;)V", "([Lcom/apple/laf/ClientPropertyApplicator$Property<TN;>;)V", $PUBLIC | $TRANSIENT, $method(ClientPropertyApplicator, init$, void, $ClientPropertyApplicator$PropertyArray*)},
		{"applyProperty", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V", "(TN;Ljava/lang/String;Ljava/lang/Object;)V", 0, $virtualMethod(ClientPropertyApplicator, applyProperty, void, Object$*, $String*, Object$*)},
		{"attachAndApplyClientProperties", "(Ljavax/swing/JComponent;)V", "(TT;)V", $PUBLIC, $virtualMethod(ClientPropertyApplicator, attachAndApplyClientProperties, void, $JComponent*)},
		{"convertJComponentToTarget", "(Ljavax/swing/JComponent;)Ljava/lang/Object;", "(TT;)TN;", $PUBLIC, $virtualMethod(ClientPropertyApplicator, convertJComponentToTarget, $Object*, $JComponent*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(ClientPropertyApplicator, propertyChange, void, $PropertyChangeEvent*)},
		{"removeFrom", "(Ljavax/swing/JComponent;)V", "(TT;)V", $PUBLIC, $virtualMethod(ClientPropertyApplicator, removeFrom, void, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.ClientPropertyApplicator",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljavax/swing/JComponent;N:Ljava/lang/Object;>Ljava/lang/Object;Ljava/beans/PropertyChangeListener;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.ClientPropertyApplicator$Property"
	};
	$loadClass(ClientPropertyApplicator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientPropertyApplicator);
	});
	return class$;
}

$Class* ClientPropertyApplicator::class$ = nullptr;

		} // laf
	} // apple
} // com