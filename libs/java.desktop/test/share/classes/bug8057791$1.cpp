#include <bug8057791$1.h>
#include <bug8057791.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Window.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <jcpp.h>

#undef BOLD
#undef EXIT_ON_CLOSE

using $bug8057791 = ::bug8057791;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JFrame = ::javax::swing::JFrame;
using $JList = ::javax::swing::JList;

void bug8057791$1::init$() {
}

void bug8057791$1::run() {
	$useLocalObjectStack();
	$init($bug8057791);
	$assignStatic($bug8057791::frame, $new($JFrame));
	$bug8057791::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug8057791::list, $new($JList));
	$assignStatic($bug8057791::model, $new($DefaultListModel));
	$bug8057791::model->add(0, "@@"_s);
	$var($Font, font, $nc($bug8057791::list)->getFont());
	$var($String, var$0, $nc(font)->getFontName());
	$nc($bug8057791::list)->setFont($$new($Font, var$0, $Font::BOLD, $cast(int32_t, (font->getSize2D() * 2))));
	$nc($bug8057791::list)->setModel($bug8057791::model);
	$nc($bug8057791::list)->setSelectedIndex(0);
	$nc($bug8057791::frame)->add($bug8057791::list);
	$nc($bug8057791::frame)->pack();
	$nc($bug8057791::frame)->setLocationRelativeTo(nullptr);
	$nc($bug8057791::frame)->setVisible(true);
}

bug8057791$1::bug8057791$1() {
}

$Class* bug8057791$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8057791$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8057791$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8057791",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8057791$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8057791$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8057791"
	};
	$loadClass(bug8057791$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8057791$1);
	});
	return class$;
}

$Class* bug8057791$1::class$ = nullptr;