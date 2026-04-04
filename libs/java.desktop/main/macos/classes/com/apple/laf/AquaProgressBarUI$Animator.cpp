#include <com/apple/laf/AquaProgressBarUI$Animator.h>
#include <com/apple/laf/AquaProgressBarUI.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef MINIMUM_DELAY

using $AquaProgressBarUI = ::com::apple::laf::AquaProgressBarUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace apple {
		namespace laf {

void AquaProgressBarUI$Animator::init$($AquaProgressBarUI* this$0) {
	$set(this, this$0, this$0);
	this->repaintInterval = $UIManager::getInt("ProgressBar.repaintInterval"_s);
	if (this->repaintInterval <= 0) {
		this->repaintInterval = 100;
	}
}

void AquaProgressBarUI$Animator::start() {
	this->previousDelay = this->repaintInterval;
	this->lastCall = 0;
	if (this->timer == nullptr) {
		$set(this, timer, $new($Timer, this->repaintInterval, this));
	} else {
		this->timer->setDelay(this->repaintInterval);
	}
	{
		$nc(this->timer)->setRepeats(false);
		$nc(this->timer)->setCoalesce(false);
	}
	$nc(this->timer)->start();
}

void AquaProgressBarUI$Animator::stop() {
	$nc(this->timer)->stop();
}

void AquaProgressBarUI$Animator::actionPerformed($ActionEvent* e) {
	;
	int64_t time = $System::currentTimeMillis();
	if (this->lastCall > 0) {
		int32_t nextDelay = (int32_t)(this->previousDelay - time + this->lastCall + this->repaintInterval);
		if (nextDelay < AquaProgressBarUI$Animator::MINIMUM_DELAY) {
			nextDelay = AquaProgressBarUI$Animator::MINIMUM_DELAY;
		}
		$nc(this->timer)->setInitialDelay(nextDelay);
		this->previousDelay = nextDelay;
	}
	$nc(this->timer)->start();
	this->lastCall = time;
	this->this$0->repaint();
}

AquaProgressBarUI$Animator::AquaProgressBarUI$Animator() {
}

$Class* AquaProgressBarUI$Animator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaProgressBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaProgressBarUI$Animator, this$0)},
		{"MINIMUM_DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaProgressBarUI$Animator, MINIMUM_DELAY)},
		{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE, $field(AquaProgressBarUI$Animator, timer)},
		{"previousDelay", "J", nullptr, $PRIVATE, $field(AquaProgressBarUI$Animator, previousDelay)},
		{"lastCall", "J", nullptr, $PRIVATE, $field(AquaProgressBarUI$Animator, lastCall)},
		{"repaintInterval", "I", nullptr, $PRIVATE, $field(AquaProgressBarUI$Animator, repaintInterval)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaProgressBarUI;)V", nullptr, $PUBLIC, $method(AquaProgressBarUI$Animator, init$, void, $AquaProgressBarUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaProgressBarUI$Animator, actionPerformed, void, $ActionEvent*)},
		{"start", "()V", nullptr, $PROTECTED, $virtualMethod(AquaProgressBarUI$Animator, start, void)},
		{"stop", "()V", nullptr, $PROTECTED, $virtualMethod(AquaProgressBarUI$Animator, stop, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaProgressBarUI$Animator", "com.apple.laf.AquaProgressBarUI", "Animator", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaProgressBarUI$Animator",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaProgressBarUI"
	};
	$loadClass(AquaProgressBarUI$Animator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaProgressBarUI$Animator);
	});
	return class$;
}

$Class* AquaProgressBarUI$Animator::class$ = nullptr;

		} // laf
	} // apple
} // com