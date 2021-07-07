/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/caret.h>

        #include <wx/window.h>
        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
    int _wxCaret___nonzero__(wxCaret* self)
    {
        return self->IsOk();
    }
    int _wxCaret___bool__(wxCaret* self)
    {
        return self->IsOk();
    }


class sipwxCaret : public  ::wxCaret
{
public:
    sipwxCaret( ::wxWindow*,int,int);
    sipwxCaret( ::wxWindow*,const  ::wxSize&);
    sipwxCaret();
    virtual ~sipwxCaret();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void Show(bool) SIP_OVERRIDE;
    void Hide() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxCaret(const sipwxCaret &);
    sipwxCaret &operator = (const sipwxCaret &);

    char sipPyMethods[2];
};

sipwxCaret::sipwxCaret( ::wxWindow*window,int width,int height):  ::wxCaret(window,width,height), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxCaret::sipwxCaret( ::wxWindow*window,const  ::wxSize& size):  ::wxCaret(window,size), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxCaret::sipwxCaret():  ::wxCaret(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxCaret::~sipwxCaret()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxCaret::Show(bool show)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_Show);

    if (!sipMeth)
    {
         ::wxCaret::Show(show);
        return;
    }

    extern void sipVH__core_90(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, bool);

    sipVH__core_90(sipGILState, 0, sipPySelf, sipMeth, show);
}

void sipwxCaret::Hide()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_Hide);

    if (!sipMeth)
    {
         ::wxCaret::Hide();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxCaret_Create, "Create(window, width, height) -> bool\n"
"Create(window, size) -> bool\n"
"\n"
"Creates a caret with the given size (in pixels) and associates it with\n"
"the window (same as the equivalent constructors).\n"
"");

extern "C" {static PyObject *meth_wxCaret_Create(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCaret_Create(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxWindow* window;
        int width;
        int height;
         ::wxCaret *sipCpp;

        static const char *sipKwdList[] = {
            sipName_window,
            sipName_width,
            sipName_height,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8ii", &sipSelf, sipType_wxCaret, &sipCpp, sipType_wxWindow, &window, &width, &height))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Create(window,width,height);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::wxWindow* window;
        const  ::wxSize* size;
        int sizeState = 0;
         ::wxCaret *sipCpp;

        static const char *sipKwdList[] = {
            sipName_window,
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1", &sipSelf, sipType_wxCaret, &sipCpp, sipType_wxWindow, &window, sipType_wxSize, &size, &sizeState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Create(window,*size);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(size),sipType_wxSize,sizeState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_Create, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCaret_GetPosition, "GetPosition() -> Point\n"
"\n"
"Get the caret position (in pixels).");

extern "C" {static PyObject *meth_wxCaret_GetPosition(PyObject *, PyObject *);}
static PyObject *meth_wxCaret_GetPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxCaret *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCaret, &sipCpp))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint(sipCpp->GetPosition());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_GetPosition, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCaret_GetSize, "GetSize() -> Size\n"
"\n"
"Get the caret size.");

extern "C" {static PyObject *meth_wxCaret_GetSize(PyObject *, PyObject *);}
static PyObject *meth_wxCaret_GetSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxCaret *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCaret, &sipCpp))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize(sipCpp->GetSize());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_GetSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCaret_Move, "Move(x, y)\n"
"Move(pt)\n"
"\n"
"Move the caret to given position (in logical coordinates).\n"
"");

extern "C" {static PyObject *meth_wxCaret_Move(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCaret_Move(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int x;
        int y;
         ::wxCaret *sipCpp;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bii", &sipSelf, sipType_wxCaret, &sipCpp, &x, &y))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Move(x,y);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::wxPoint* pt;
        int ptState = 0;
         ::wxCaret *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pt,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxCaret, &sipCpp, sipType_wxPoint, &pt, &ptState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Move(*pt);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(pt),sipType_wxPoint,ptState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_Move, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCaret_SetSize, "SetSize(width, height)\n"
"SetSize(size)\n"
"\n"
"Changes the size of the caret.\n"
"");

extern "C" {static PyObject *meth_wxCaret_SetSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCaret_SetSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int width;
        int height;
         ::wxCaret *sipCpp;

        static const char *sipKwdList[] = {
            sipName_width,
            sipName_height,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bii", &sipSelf, sipType_wxCaret, &sipCpp, &width, &height))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetSize(width,height);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::wxSize* size;
        int sizeState = 0;
         ::wxCaret *sipCpp;

        static const char *sipKwdList[] = {
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxCaret, &sipCpp, sipType_wxSize, &size, &sizeState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetSize(*size);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(size),sipType_wxSize,sizeState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_SetSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCaret_GetWindow, "GetWindow() -> Window\n"
"\n"
"Get the window the caret is associated with.");

extern "C" {static PyObject *meth_wxCaret_GetWindow(PyObject *, PyObject *);}
static PyObject *meth_wxCaret_GetWindow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxCaret *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCaret, &sipCpp))
        {
             ::wxWindow*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetWindow();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxWindow,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_GetWindow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCaret_Hide, "Hide()\n"
"\n"
"Hides the caret, same as Show(false).");

extern "C" {static PyObject *meth_wxCaret_Hide(PyObject *, PyObject *);}
static PyObject *meth_wxCaret_Hide(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxCaret *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCaret, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxCaret::Hide() : sipCpp->Hide());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_Hide, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCaret_IsOk, "IsOk() -> bool\n"
"\n"
"Returns true if the caret was created successfully.");

extern "C" {static PyObject *meth_wxCaret_IsOk(PyObject *, PyObject *);}
static PyObject *meth_wxCaret_IsOk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxCaret *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCaret, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsOk();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_IsOk, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCaret_IsVisible, "IsVisible() -> bool\n"
"\n"
"Returns true if the caret is visible and false if it is permanently\n"
"hidden (if it is blinking and not shown currently but will be after\n"
"the next blink, this method still returns true).");

extern "C" {static PyObject *meth_wxCaret_IsVisible(PyObject *, PyObject *);}
static PyObject *meth_wxCaret_IsVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxCaret *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCaret, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsVisible();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_IsVisible, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCaret_Show, "Show(show=True)\n"
"\n"
"Shows or hides the caret.");

extern "C" {static PyObject *meth_wxCaret_Show(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCaret_Show(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        bool show = 1;
         ::wxCaret *sipCpp;

        static const char *sipKwdList[] = {
            sipName_show,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|b", &sipSelf, sipType_wxCaret, &sipCpp, &show))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxCaret::Show(show) : sipCpp->Show(show));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_Show, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCaret_GetBlinkTime, "GetBlinkTime() -> int\n"
"\n"
"Returns the blink time which is measured in milliseconds and is the\n"
"time elapsed between 2 inversions of the caret (blink time of the\n"
"caret is the same for all carets, so this functions is static).");

extern "C" {static PyObject *meth_wxCaret_GetBlinkTime(PyObject *, PyObject *);}
static PyObject *meth_wxCaret_GetBlinkTime(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxCaret::GetBlinkTime();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_GetBlinkTime, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCaret_SetBlinkTime, "SetBlinkTime(milliseconds)\n"
"\n"
"Sets the blink time for all the carets.");

extern "C" {static PyObject *meth_wxCaret_SetBlinkTime(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCaret_SetBlinkTime(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int milliseconds;

        static const char *sipKwdList[] = {
            sipName_milliseconds,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "i", &milliseconds))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
             ::wxCaret::SetBlinkTime(milliseconds);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Caret, sipName_SetBlinkTime, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static int slot_wxCaret___bool__(PyObject *);}
static int slot_wxCaret___bool__(PyObject *sipSelf)
{
     ::wxCaret *sipCpp = reinterpret_cast< ::wxCaret *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxCaret));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxCaret___bool__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_wxCaret___nonzero__(PyObject *);}
static int slot_wxCaret___nonzero__(PyObject *sipSelf)
{
     ::wxCaret *sipCpp = reinterpret_cast< ::wxCaret *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxCaret));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxCaret___nonzero__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxCaret(void *, int);}
static void release_wxCaret(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxCaret *>(sipCppV);
    else
        delete reinterpret_cast< ::wxCaret *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxCaret(sipSimpleWrapper *);}
static void dealloc_wxCaret(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxCaret *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxCaret(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxCaret(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxCaret(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxCaret *sipCpp = SIP_NULLPTR;

    {
         ::wxWindow* window;
        int width;
        int height;

        static const char *sipKwdList[] = {
            sipName_window,
            sipName_width,
            sipName_height,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8ii", sipType_wxWindow, &window, &width, &height))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxCaret(window,width,height);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::wxWindow* window;
        const  ::wxSize* size;
        int sizeState = 0;

        static const char *sipKwdList[] = {
            sipName_window,
            sipName_size,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8J1", sipType_wxWindow, &window, sipType_wxSize, &size, &sizeState))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxCaret(window,*size);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(size),sipType_wxSize,sizeState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxCaret();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxCaret[] = {
    {(void *)slot_wxCaret___bool__, bool_slot},
    {(void *)slot_wxCaret___nonzero__, bool_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxCaret[] = {
    {SIP_MLNAME_CAST(sipName_Create), SIP_MLMETH_CAST(meth_wxCaret_Create), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCaret_Create)},
    {SIP_MLNAME_CAST(sipName_GetBlinkTime), meth_wxCaret_GetBlinkTime, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCaret_GetBlinkTime)},
    {SIP_MLNAME_CAST(sipName_GetPosition), meth_wxCaret_GetPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCaret_GetPosition)},
    {SIP_MLNAME_CAST(sipName_GetSize), meth_wxCaret_GetSize, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCaret_GetSize)},
    {SIP_MLNAME_CAST(sipName_GetWindow), meth_wxCaret_GetWindow, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCaret_GetWindow)},
    {SIP_MLNAME_CAST(sipName_Hide), meth_wxCaret_Hide, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCaret_Hide)},
    {SIP_MLNAME_CAST(sipName_IsOk), meth_wxCaret_IsOk, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCaret_IsOk)},
    {SIP_MLNAME_CAST(sipName_IsVisible), meth_wxCaret_IsVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCaret_IsVisible)},
    {SIP_MLNAME_CAST(sipName_Move), SIP_MLMETH_CAST(meth_wxCaret_Move), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCaret_Move)},
    {SIP_MLNAME_CAST(sipName_SetBlinkTime), SIP_MLMETH_CAST(meth_wxCaret_SetBlinkTime), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCaret_SetBlinkTime)},
    {SIP_MLNAME_CAST(sipName_SetSize), SIP_MLMETH_CAST(meth_wxCaret_SetSize), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCaret_SetSize)},
    {SIP_MLNAME_CAST(sipName_Show), SIP_MLMETH_CAST(meth_wxCaret_Show), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCaret_Show)}
};

sipVariableDef variables_wxCaret[] = {
    {PropertyVariable, sipName_Window, &methods_wxCaret[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Size, &methods_wxCaret[3], &methods_wxCaret[10], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Position, &methods_wxCaret[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxCaret, "Caret(window, width, height)\n"
"Caret(window, size)\n"
"Caret()\n"
"\n"
"A caret is a blinking cursor showing the position where the typed text\n"
"will appear.");


sipClassTypeDef sipTypeDef__core_wxCaret = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxCaret,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_Caret,
        {0, 0, 1},
        12, methods_wxCaret,
        0, SIP_NULLPTR,
        3, variables_wxCaret,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxCaret,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxCaret,
    init_type_wxCaret,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxCaret,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxCaret,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};