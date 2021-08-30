#include "contractcontroller.h"

contractController::contractController(Assicurati *a):model(a), view(new contractScene())
{

}

contractScene *contractController::getScene() const
{
    return view;
}
