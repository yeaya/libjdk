#include <javax/swing/JSlider$1SmartHashtable.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JSlider$1SmartHashtable$LabelUIResource.h>
#include <javax/swing/JSlider.h>
#include <jcpp.h>

#undef CENTER

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JSlider = ::javax::swing::JSlider;
using $JSlider$1SmartHashtable$LabelUIResource = ::javax::swing::JSlider$1SmartHashtable$LabelUIResource;

namespace javax {
	namespace swing {

$Object* JSlider$1SmartHashtable::clone() {
	 return this->$Hashtable::clone();
}

$String* JSlider$1SmartHashtable::toString() {
	 return this->$Hashtable::toString();
}

bool JSlider$1SmartHashtable::equals(Object$* arg0) {
	 return this->$Hashtable::equals(arg0);
}

int32_t JSlider$1SmartHashtable::hashCode() {
	 return this->$Hashtable::hashCode();
}

void JSlider$1SmartHashtable::finalize() {
	this->$Hashtable::finalize();
}

void JSlider$1SmartHashtable::init$($JSlider* this$0, int32_t increment, int32_t start) {
	$set(this, this$0, this$0);
	$Hashtable::init$();
	this->increment = 0;
	this->start = 0;
	this->startAtMin = false;
	this->increment = increment;
	this->start = start;
	this->startAtMin = start == this$0->getMinimum();
	createLabels();
}

void JSlider$1SmartHashtable::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	if ($$nc($nc(e)->getPropertyName())->equals("minimum"_s) && this->startAtMin) {
		this->start = this->this$0->getMinimum();
	}
	bool var$0 = $$nc(e->getPropertyName())->equals("minimum"_s);
	if (var$0 || $$nc(e->getPropertyName())->equals("maximum"_s)) {
		$var($Enumeration, keys, $$nc(this->this$0->getLabelTable())->keys());
		$var($Hashtable, hashtable, $new($Hashtable));
		while ($nc(keys)->hasMoreElements()) {
			$var($Integer, key, $cast($Integer, keys->nextElement()));
			$var($JComponent, value, $cast($JComponent, $nc(this->this$0->labelTable)->get(key)));
			if (!($instanceOf($JSlider$1SmartHashtable$LabelUIResource, value))) {
				hashtable->put(key, value);
			}
		}
		clear();
		createLabels();
		$assign(keys, hashtable->keys());
		while ($nc(keys)->hasMoreElements()) {
			$var($Integer, key, $cast($Integer, keys->nextElement()));
			put(key, $$cast($JComponent, hashtable->get(key)));
		}
		$$sure($JSlider, e->getSource())->setLabelTable(this);
	}
}

void JSlider$1SmartHashtable::createLabels() {
	$useLocalObjectStack();
	for (int32_t labelIndex = this->start; labelIndex <= this->this$0->getMaximum(); labelIndex += this->increment) {
		$var($Object, var$0, $Integer::valueOf(labelIndex));
		put(var$0, $$new($JSlider$1SmartHashtable$LabelUIResource, this, $$str({""_s, $$str(labelIndex)}), $JLabel::CENTER));
	}
}

JSlider$1SmartHashtable::JSlider$1SmartHashtable() {
}

$Class* JSlider$1SmartHashtable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JSlider;", nullptr, $FINAL | $SYNTHETIC, $field(JSlider$1SmartHashtable, this$0)},
		{"increment", "I", nullptr, 0, $field(JSlider$1SmartHashtable, increment)},
		{"start", "I", nullptr, 0, $field(JSlider$1SmartHashtable, start)},
		{"startAtMin", "Z", nullptr, 0, $field(JSlider$1SmartHashtable, startAtMin)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"<init>", "(Ljavax/swing/JSlider;II)V", nullptr, $PUBLIC, $method(JSlider$1SmartHashtable, init$, void, $JSlider*, int32_t, int32_t)},
		{"createLabels", "()V", nullptr, 0, $virtualMethod(JSlider$1SmartHashtable, createLabels, void)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JSlider$1SmartHashtable, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JSlider",
		"createStandardLabels",
		"(II)Ljava/util/Hashtable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSlider$1SmartHashtable", nullptr, "SmartHashtable", 0},
		{"javax.swing.JSlider$1SmartHashtable$LabelUIResource", "javax.swing.JSlider$1SmartHashtable", "LabelUIResource", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JSlider$1SmartHashtable",
		"java.util.Hashtable",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/Hashtable<Ljava/lang/Integer;Ljavax/swing/JComponent;>;Ljava/beans/PropertyChangeListener;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JSlider"
	};
	$loadClass(JSlider$1SmartHashtable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSlider$1SmartHashtable));
	});
	return class$;
}

$Class* JSlider$1SmartHashtable::class$ = nullptr;

	} // swing
} // javax