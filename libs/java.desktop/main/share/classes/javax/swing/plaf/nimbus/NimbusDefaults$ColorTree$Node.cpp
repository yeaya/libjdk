#include <javax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node.h>
#include <java/awt/Color.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <javax/swing/plaf/nimbus/DerivedColor.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$ColorTree.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $DerivedColor = ::javax::swing::plaf::nimbus::DerivedColor;
using $NimbusDefaults$ColorTree = ::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void NimbusDefaults$ColorTree$Node::init$($NimbusDefaults$ColorTree* this$1, $Color* color, NimbusDefaults$ColorTree$Node* parent) {
	$set(this, this$1, this$1);
	$set(this, children, $new($LinkedList));
	set(color, parent);
}

void NimbusDefaults$ColorTree$Node::set($Color* color, NimbusDefaults$ColorTree$Node* parent) {
	$set(this, color, color);
	$set(this, parent, parent);
}

void NimbusDefaults$ColorTree$Node::update() {
	$useLocalObjectStack();
	if ($instanceOf($DerivedColor, this->color)) {
		$cast($DerivedColor, this->color)->rederiveColor();
	}
	{
		$var($Iterator, i$, $nc(this->children)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(NimbusDefaults$ColorTree$Node, child, $cast(NimbusDefaults$ColorTree$Node, i$->next()));
			{
				$nc(child)->update();
			}
		}
	}
}

NimbusDefaults$ColorTree$Node::NimbusDefaults$ColorTree$Node() {
}

$Class* NimbusDefaults$ColorTree$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusDefaults$ColorTree$Node, this$1)},
		{"color", "Ljava/awt/Color;", nullptr, 0, $field(NimbusDefaults$ColorTree$Node, color)},
		{"parent", "Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node;", nullptr, 0, $field(NimbusDefaults$ColorTree$Node, parent)},
		{"children", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node;>;", 0, $field(NimbusDefaults$ColorTree$Node, children)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree;Ljava/awt/Color;Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node;)V", nullptr, 0, $method(NimbusDefaults$ColorTree$Node, init$, void, $NimbusDefaults$ColorTree*, $Color*, NimbusDefaults$ColorTree$Node*)},
		{"set", "(Ljava/awt/Color;Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node;)V", nullptr, $PUBLIC, $virtualMethod(NimbusDefaults$ColorTree$Node, set, void, $Color*, NimbusDefaults$ColorTree$Node*)},
		{"update", "()V", nullptr, $PUBLIC, $virtualMethod(NimbusDefaults$ColorTree$Node, update, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.NimbusDefaults$ColorTree", "javax.swing.plaf.nimbus.NimbusDefaults", "ColorTree", $PRIVATE},
		{"javax.swing.plaf.nimbus.NimbusDefaults$ColorTree$Node", "javax.swing.plaf.nimbus.NimbusDefaults$ColorTree", "Node", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.NimbusDefaults$ColorTree$Node",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.NimbusDefaults"
	};
	$loadClass(NimbusDefaults$ColorTree$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusDefaults$ColorTree$Node);
	});
	return class$;
}

$Class* NimbusDefaults$ColorTree$Node::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax