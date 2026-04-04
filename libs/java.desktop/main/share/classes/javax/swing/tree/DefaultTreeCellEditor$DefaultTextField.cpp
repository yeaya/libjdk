#include <javax/swing/tree/DefaultTreeCellEditor$DefaultTextField.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $JTextField = ::javax::swing::JTextField;
using $Border = ::javax::swing::border::Border;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;

namespace javax {
	namespace swing {
		namespace tree {

void DefaultTreeCellEditor$DefaultTextField::init$($DefaultTreeCellEditor* this$0, $Border* border) {
	$set(this, this$0, this$0);
	$JTextField::init$();
	setBorder(border);
}

void DefaultTreeCellEditor$DefaultTextField::setBorder($Border* border) {
	$JTextField::setBorder(border);
	$set(this, border, border);
}

$Border* DefaultTreeCellEditor$DefaultTextField::getBorder() {
	return this->border;
}

$Font* DefaultTreeCellEditor$DefaultTextField::getFont() {
	$useLocalObjectStack();
	$var($Font, font, $JTextField::getFont());
	if ($instanceOf($FontUIResource, font)) {
		$var($Container, parent, getParent());
		if (parent != nullptr && parent->getFont() != nullptr) {
			$assign(font, parent->getFont());
		}
	}
	return font;
}

$Dimension* DefaultTreeCellEditor$DefaultTextField::getPreferredSize() {
	$useLocalObjectStack();
	$var($Dimension, size, $JTextField::getPreferredSize());
	if (this->this$0->renderer != nullptr && this->this$0->getFont() == nullptr) {
		$var($Dimension, rSize, this->this$0->renderer->getPreferredSize());
		$nc(size)->height = $nc(rSize)->height;
	}
	return size;
}

DefaultTreeCellEditor$DefaultTextField::DefaultTreeCellEditor$DefaultTextField() {
}

$Class* DefaultTreeCellEditor$DefaultTextField::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/tree/DefaultTreeCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultTreeCellEditor$DefaultTextField, this$0)},
		{"border", "Ljavax/swing/border/Border;", nullptr, $PROTECTED, $field(DefaultTreeCellEditor$DefaultTextField, border)},
		{}
	};
	$NamedAttribute setBordermethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The component\'s border."},
		{}
	};
	$CompoundAttribute setBordermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setBordermethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/tree/DefaultTreeCellEditor;Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(DefaultTreeCellEditor$DefaultTextField, init$, void, $DefaultTreeCellEditor*, $Border*)},
		{"getBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC, $virtualMethod(DefaultTreeCellEditor$DefaultTextField, getBorder, $Border*)},
		{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(DefaultTreeCellEditor$DefaultTextField, getFont, $Font*)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(DefaultTreeCellEditor$DefaultTextField, getPreferredSize, $Dimension*)},
		{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $virtualMethod(DefaultTreeCellEditor$DefaultTextField, setBorder, void, $Border*), nullptr, nullptr, setBordermethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.tree.DefaultTreeCellEditor$DefaultTextField", "javax.swing.tree.DefaultTreeCellEditor", "DefaultTextField", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.tree.DefaultTreeCellEditor$DefaultTextField",
		"javax.swing.JTextField",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.tree.DefaultTreeCellEditor"
	};
	$loadClass(DefaultTreeCellEditor$DefaultTextField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultTreeCellEditor$DefaultTextField));
	});
	return class$;
}

$Class* DefaultTreeCellEditor$DefaultTextField::class$ = nullptr;

		} // tree
	} // swing
} // javax