#include <sun/swing/plaf/synth/SynthFileChooserUI$FileNameCompletionAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/regex/PatternSyntaxException.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI$GlobFilter.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PatternSyntaxException = ::java::util::regex::PatternSyntaxException;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;
using $SynthFileChooserUI$GlobFilter = ::sun::swing::plaf::synth::SynthFileChooserUI$GlobFilter;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthFileChooserUI$FileNameCompletionAction::init$($SynthFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("fileNameCompletion"_s);
}

void SynthFileChooserUI$FileNameCompletionAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JFileChooser, chooser, this->this$0->getFileChooser());
	$var($String, fileName, this->this$0->getFileName());
	if (fileName != nullptr) {
		$assign(fileName, fileName->trim());
	}
	this->this$0->resetGlobFilter();
	bool var$0 = fileName == nullptr || fileName->isEmpty();
	if (!var$0) {
		bool var$1 = $nc(chooser)->isMultiSelectionEnabled();
		var$0 = var$1 && fileName->startsWith("\""_s);
	}
	if (var$0) {
		return;
	}
	$var($FileFilter, currentFilter, $nc(chooser)->getFileFilter());
	if (this->this$0->globFilter == nullptr) {
		$set(this->this$0, globFilter, $new($SynthFileChooserUI$GlobFilter, this->this$0));
	}
	try {
		$nc(this->this$0->globFilter)->setPattern(!$SynthFileChooserUI::isGlobPattern(fileName) ? $$str({fileName, "*"_s}) : fileName);
		if (!($instanceOf($SynthFileChooserUI$GlobFilter, currentFilter))) {
			$set(this->this$0, actualFileFilter, currentFilter);
		}
		chooser->setFileFilter(nullptr);
		chooser->setFileFilter(this->this$0->globFilter);
		$set(this->this$0, fileNameCompletionString, fileName);
	} catch ($PatternSyntaxException& pse) {
	}
}

SynthFileChooserUI$FileNameCompletionAction::SynthFileChooserUI$FileNameCompletionAction() {
}

$Class* SynthFileChooserUI$FileNameCompletionAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUI$FileNameCompletionAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUI;)V", nullptr, $PROTECTED, $method(SynthFileChooserUI$FileNameCompletionAction, init$, void, $SynthFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUI$FileNameCompletionAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.plaf.synth.SynthFileChooserUI$FileNameCompletionAction", "sun.swing.plaf.synth.SynthFileChooserUI", "FileNameCompletionAction", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.plaf.synth.SynthFileChooserUI$FileNameCompletionAction",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.plaf.synth.SynthFileChooserUI"
	};
	$loadClass(SynthFileChooserUI$FileNameCompletionAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthFileChooserUI$FileNameCompletionAction));
	});
	return class$;
}

$Class* SynthFileChooserUI$FileNameCompletionAction::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun