#include <javax/swing/JComponent$ReadObjectCallback.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/ObjectInputStream.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

void JComponent$ReadObjectCallback::init$($JComponent* this$0, $ObjectInputStream* s) {
	$set(this, this$0, this$0);
	$set(this, roots, $new($Vector, 1));
	$set(this, inputStream, s);
	$nc(s)->registerValidation(this, 0);
}

void JComponent$ReadObjectCallback::validateObject() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Iterator, i$, this->roots->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JComponent, root, $cast($JComponent, i$->next()));
			{
				$SwingUtilities::updateComponentTreeUI(root);
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init($JComponent);
		$nc($JComponent::readObjectCallbacks)->remove(this->inputStream);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void JComponent$ReadObjectCallback::registerComponent($JComponent* c) {
	$useLocalObjectStack();
	{
		$var($Iterator, i$, this->roots->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JComponent, root, $cast($JComponent, i$->next()));
			{
				$var($Component, p, c);
				for (; p != nullptr; $assign(p, p->getParent())) {
					if ($equals(p, root)) {
						return;
					}
				}
			}
		}
	}
	for (int32_t i = 0; i < this->roots->size(); ++i) {
		$var($JComponent, root, $cast($JComponent, this->roots->elementAt(i)));
		{
			$var($Component, p, $nc(root)->getParent());
			for (; p != nullptr; $assign(p, p->getParent())) {
				if ($equals(p, c)) {
					this->roots->removeElementAt(i--);
					break;
				}
			}
		}
	}
	this->roots->addElement(c);
}

JComponent$ReadObjectCallback::JComponent$ReadObjectCallback() {
}

$Class* JComponent$ReadObjectCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JComponent$ReadObjectCallback, this$0)},
		{"roots", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/JComponent;>;", $PRIVATE | $FINAL, $field(JComponent$ReadObjectCallback, roots)},
		{"inputStream", "Ljava/io/ObjectInputStream;", nullptr, $PRIVATE | $FINAL, $field(JComponent$ReadObjectCallback, inputStream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent;Ljava/io/ObjectInputStream;)V", nullptr, 0, $method(JComponent$ReadObjectCallback, init$, void, $JComponent*, $ObjectInputStream*), "java.lang.Exception"},
		{"registerComponent", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(JComponent$ReadObjectCallback, registerComponent, void, $JComponent*)},
		{"validateObject", "()V", nullptr, $PUBLIC, $virtualMethod(JComponent$ReadObjectCallback, validateObject, void), "java.io.InvalidObjectException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComponent$ReadObjectCallback", "javax.swing.JComponent", "ReadObjectCallback", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JComponent$ReadObjectCallback",
		"java.lang.Object",
		"java.io.ObjectInputValidation",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JComponent"
	};
	$loadClass(JComponent$ReadObjectCallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComponent$ReadObjectCallback);
	});
	return class$;
}

$Class* JComponent$ReadObjectCallback::class$ = nullptr;

	} // swing
} // javax