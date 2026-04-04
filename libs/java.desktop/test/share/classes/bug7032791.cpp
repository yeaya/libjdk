#include <bug7032791.h>
#include <java/awt/Component.h>
#include <javax/swing/JTable.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $UIManager = ::javax::swing::UIManager;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;

void bug7032791::init$() {
}

void bug7032791::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($SynthLookAndFeel));
	$var($Object, value, "Test value"_s);
	$var($JTable, table, $new($JTable, 1, 1));
	$var($TableCellRenderer, renderer, table->getDefaultRenderer($Object::class$));
	$nc(renderer)->getTableCellRendererComponent(nullptr, value, true, true, 0, 0);
	$nc($System::out)->println("OK"_s);
}

bug7032791::bug7032791() {
}

$Class* bug7032791::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7032791, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7032791, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7032791",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug7032791, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7032791);
	});
	return class$;
}

$Class* bug7032791::class$ = nullptr;