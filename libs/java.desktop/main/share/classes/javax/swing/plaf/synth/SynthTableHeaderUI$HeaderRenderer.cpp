#include <javax/swing/plaf/synth/SynthTableHeaderUI$HeaderRenderer.h>
#include <java/awt/Component.h>
#include <java/lang/AssertionError.h>
#include <java/util/List.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowSorter$SortKey.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SortOrder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/synth/SynthBorder.h>
#include <javax/swing/plaf/synth/SynthLabelUI.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthTableHeaderUI$1.h>
#include <javax/swing/plaf/synth/SynthTableHeaderUI.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>
#include <jcpp.h>

#undef LEADING

using $Component = ::java::awt::Component;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $RowSorter = ::javax::swing::RowSorter;
using $RowSorter$SortKey = ::javax::swing::RowSorter$SortKey;
using $Border = ::javax::swing::border::Border;
using $SynthBorder = ::javax::swing::plaf::synth::SynthBorder;
using $SynthLabelUI = ::javax::swing::plaf::synth::SynthLabelUI;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthTableHeaderUI = ::javax::swing::plaf::synth::SynthTableHeaderUI;
using $SynthTableHeaderUI$1 = ::javax::swing::plaf::synth::SynthTableHeaderUI$1;
using $DefaultTableCellHeaderRenderer = ::sun::swing::table::DefaultTableCellHeaderRenderer;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthTableHeaderUI$HeaderRenderer::init$($SynthTableHeaderUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultTableCellHeaderRenderer::init$();
	setHorizontalAlignment($JLabel::LEADING);
	setName("TableHeader.renderer"_s);
}

$Component* SynthTableHeaderUI$HeaderRenderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalObjectStack();
	bool hasRollover = (column == $SynthTableHeaderUI::access$000(this->this$0));
	if (isSelected || hasRollover || hasFocus) {
		bool enabled = (table == nullptr) ? true : table->isEnabled();
		$load($SynthLabelUI);
		$SynthLookAndFeel::setSelectedUI($$cast($SynthLabelUI, $SynthLookAndFeel::getUIOfType($(getUI()), $SynthLabelUI::class$)), isSelected, hasFocus, enabled, hasRollover);
	} else {
		$SynthLookAndFeel::resetSelectedUI();
	}
	$var($RowSorter, rs, table == nullptr ? ($RowSorter*)nullptr : table->getRowSorter());
	$var($List, sortKeys, rs == nullptr ? ($List*)nullptr : rs->getSortKeys());
	bool var$0 = sortKeys != nullptr && sortKeys->size() > 0;
	if (var$0) {
		int32_t var$1 = $$sure($RowSorter$SortKey, sortKeys->get(0))->getColumn();
		var$0 = var$1 == $nc(table)->convertColumnIndexToModel(column);
	}
	if (var$0) {
		$init($SynthTableHeaderUI$1);
		switch ($nc($SynthTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder)->get(($$nc($$sure($RowSorter$SortKey, $nc(sortKeys)->get(0))->getSortOrder()))->ordinal())) {
		case 1:
			putClientProperty("Table.sortOrder"_s, "ASCENDING"_s);
			break;
		case 2:
			putClientProperty("Table.sortOrder"_s, "DESCENDING"_s);
			break;
		case 3:
			putClientProperty("Table.sortOrder"_s, "UNSORTED"_s);
			break;
		default:
			$throwNew($AssertionError, $of("Cannot happen"_s));
		}
	} else {
		putClientProperty("Table.sortOrder"_s, "UNSORTED"_s);
	}
	$DefaultTableCellHeaderRenderer::getTableCellRendererComponent(table, value, isSelected, hasFocus, row, column);
	return this;
}

void SynthTableHeaderUI$HeaderRenderer::setBorder($Border* border) {
	if ($instanceOf($SynthBorder, border)) {
		$DefaultTableCellHeaderRenderer::setBorder(border);
	}
}

SynthTableHeaderUI$HeaderRenderer::SynthTableHeaderUI$HeaderRenderer() {
}

$Class* SynthTableHeaderUI$HeaderRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthTableHeaderUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTableHeaderUI$HeaderRenderer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthTableHeaderUI;)V", nullptr, 0, $method(SynthTableHeaderUI$HeaderRenderer, init$, void, $SynthTableHeaderUI*)},
		{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(SynthTableHeaderUI$HeaderRenderer, getTableCellRendererComponent, $Component*, $JTable*, Object$*, bool, bool, int32_t, int32_t)},
		{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $virtualMethod(SynthTableHeaderUI$HeaderRenderer, setBorder, void, $Border*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthTableHeaderUI$HeaderRenderer", "javax.swing.plaf.synth.SynthTableHeaderUI", "HeaderRenderer", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthTableHeaderUI$HeaderRenderer",
		"sun.swing.table.DefaultTableCellHeaderRenderer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthTableHeaderUI"
	};
	$loadClass(SynthTableHeaderUI$HeaderRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthTableHeaderUI$HeaderRenderer));
	});
	return class$;
}

$Class* SynthTableHeaderUI$HeaderRenderer::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax