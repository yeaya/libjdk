#include <javax/swing/text/DefaultHighlighter$SafeDamager.h>
#include <java/util/Vector.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TextUI = ::javax::swing::plaf::TextUI;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position = ::javax::swing::text::Position;

namespace javax {
	namespace swing {
		namespace text {

void DefaultHighlighter$SafeDamager::init$($DefaultHighlighter* this$0) {
	$set(this, this$0, this$0);
	$set(this, p0, $new($Vector, 10));
	$set(this, p1, $new($Vector, 10));
	$set(this, lastDoc, nullptr);
}

void DefaultHighlighter$SafeDamager::run() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->this$0->component != nullptr) {
			$var($TextUI, mapper, $cast($TextUI, this->this$0->component->getUI()));
			if (mapper != nullptr && this->lastDoc == $nc(this->this$0->component)->getDocument()) {
				int32_t len = $nc(this->p0)->size();
				for (int32_t i = 0; i < len; ++i) {
					$var($JTextComponent, var$0, this->this$0->component);
					int32_t var$1 = $$sure($Position, $nc(this->p0)->get(i))->getOffset();
					mapper->damageRange(var$0, var$1, $$sure($Position, $nc(this->p1)->get(i))->getOffset());
				}
			}
		}
		$nc(this->p0)->clear();
		$nc(this->p1)->clear();
		$set(this, lastDoc, nullptr);
	}
}

void DefaultHighlighter$SafeDamager::damageRange($Position* pos0, $Position* pos1) {
	$synchronized(this) {
		if (this->this$0->component == nullptr) {
			$nc(this->p0)->clear();
			$set(this, lastDoc, nullptr);
			return;
		}
		bool addToQueue = $nc(this->p0)->isEmpty();
		$var($Document, curDoc, $nc(this->this$0->component)->getDocument());
		if (curDoc != this->lastDoc) {
			if (!$nc(this->p0)->isEmpty()) {
				this->p0->clear();
				$nc(this->p1)->clear();
			}
			$set(this, lastDoc, curDoc);
		}
		$nc(this->p0)->add(pos0);
		$nc(this->p1)->add(pos1);
		if (addToQueue) {
			$SwingUtilities::invokeLater(this);
		}
	}
}

DefaultHighlighter$SafeDamager::DefaultHighlighter$SafeDamager() {
}

$Class* DefaultHighlighter$SafeDamager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/DefaultHighlighter;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultHighlighter$SafeDamager, this$0)},
		{"p0", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/Position;>;", $PRIVATE, $field(DefaultHighlighter$SafeDamager, p0)},
		{"p1", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/Position;>;", $PRIVATE, $field(DefaultHighlighter$SafeDamager, p1)},
		{"lastDoc", "Ljavax/swing/text/Document;", nullptr, $PRIVATE, $field(DefaultHighlighter$SafeDamager, lastDoc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/DefaultHighlighter;)V", nullptr, 0, $method(DefaultHighlighter$SafeDamager, init$, void, $DefaultHighlighter*)},
		{"damageRange", "(Ljavax/swing/text/Position;Ljavax/swing/text/Position;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DefaultHighlighter$SafeDamager, damageRange, void, $Position*, $Position*)},
		{"run", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DefaultHighlighter$SafeDamager, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultHighlighter$SafeDamager", "javax.swing.text.DefaultHighlighter", "SafeDamager", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultHighlighter$SafeDamager",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.DefaultHighlighter"
	};
	$loadClass(DefaultHighlighter$SafeDamager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultHighlighter$SafeDamager);
	});
	return class$;
}

$Class* DefaultHighlighter$SafeDamager::class$ = nullptr;

		} // text
	} // swing
} // javax