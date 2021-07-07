/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/display.h>

        #include <wx/window.h>
        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
        #include <wx/vidmode.h>
        #include <wx/gdicmn.h>


PyDoc_STRVAR(doc_wxDisplay_ChangeMode, "ChangeMode(mode=DefaultVideoMode) -> bool\n"
"\n"
"Changes the video mode of this display to the mode specified in the\n"
"mode parameter.");

extern "C" {static PyObject *meth_wxDisplay_ChangeMode(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDisplay_ChangeMode(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxVideoMode& modedef = wxDefaultVideoMode;
        const  ::wxVideoMode* mode = &modedef;
         ::wxDisplay *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|J9", &sipSelf, sipType_wxDisplay, &sipCpp, sipType_wxVideoMode, &mode))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ChangeMode(*mode);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Display, sipName_ChangeMode, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDisplay_GetClientArea, "GetClientArea() -> Rect\n"
"\n"
"Returns the client area of the display.");

extern "C" {static PyObject *meth_wxDisplay_GetClientArea(PyObject *, PyObject *);}
static PyObject *meth_wxDisplay_GetClientArea(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDisplay *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDisplay, &sipCpp))
        {
             ::wxRect*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRect(sipCpp->GetClientArea());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRect,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Display, sipName_GetClientArea, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDisplay_GetCurrentMode, "GetCurrentMode() -> VideoMode\n"
"\n"
"Returns the current video mode that this display is in.");

extern "C" {static PyObject *meth_wxDisplay_GetCurrentMode(PyObject *, PyObject *);}
static PyObject *meth_wxDisplay_GetCurrentMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDisplay *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDisplay, &sipCpp))
        {
             ::wxVideoMode*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxVideoMode(sipCpp->GetCurrentMode());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxVideoMode,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Display, sipName_GetCurrentMode, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDisplay_GetGeometry, "GetGeometry() -> Rect\n"
"\n"
"Returns the bounding rectangle of the display whose index was passed\n"
"to the constructor.");

extern "C" {static PyObject *meth_wxDisplay_GetGeometry(PyObject *, PyObject *);}
static PyObject *meth_wxDisplay_GetGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDisplay *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDisplay, &sipCpp))
        {
             ::wxRect*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRect(sipCpp->GetGeometry());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRect,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Display, sipName_GetGeometry, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDisplay_GetModes, "GetModes(mode=DefaultVideoMode) -> ArrayVideoModes\n"
"\n"
"Fills and returns an array with all the video modes that are supported\n"
"by this display, or video modes that are supported by this display and\n"
"match the mode parameter (if mode is not wxDefaultVideoMode).");

extern "C" {static PyObject *meth_wxDisplay_GetModes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDisplay_GetModes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxVideoMode& modedef = wxDefaultVideoMode;
        const  ::wxVideoMode* mode = &modedef;
        const  ::wxDisplay *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|J9", &sipSelf, sipType_wxDisplay, &sipCpp, sipType_wxVideoMode, &mode))
        {
             ::wxArrayVideoModes*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxArrayVideoModes(sipCpp->GetModes(*mode));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxArrayVideoModes,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Display, sipName_GetModes, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDisplay_GetName, "GetName() -> String\n"
"\n"
"Returns the display's name.");

extern "C" {static PyObject *meth_wxDisplay_GetName(PyObject *, PyObject *);}
static PyObject *meth_wxDisplay_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDisplay *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDisplay, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetName());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Display, sipName_GetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDisplay_GetPPI, "GetPPI() -> Size\n"
"\n"
"Returns display resolution in pixels per inch.");

extern "C" {static PyObject *meth_wxDisplay_GetPPI(PyObject *, PyObject *);}
static PyObject *meth_wxDisplay_GetPPI(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDisplay *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDisplay, &sipCpp))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize(sipCpp->GetPPI());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Display, sipName_GetPPI, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDisplay_IsPrimary, "IsPrimary() -> bool\n"
"\n"
"Returns true if the display is the primary display.");

extern "C" {static PyObject *meth_wxDisplay_IsPrimary(PyObject *, PyObject *);}
static PyObject *meth_wxDisplay_IsPrimary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDisplay *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDisplay, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsPrimary();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Display, sipName_IsPrimary, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDisplay_GetCount, "GetCount() -> unsignedint\n"
"\n"
"Returns the number of connected displays.");

extern "C" {static PyObject *meth_wxDisplay_GetCount(PyObject *, PyObject *);}
static PyObject *meth_wxDisplay_GetCount(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            uint sipRes;

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxDisplay::GetCount();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Display, sipName_GetCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDisplay_GetFromPoint, "GetFromPoint(pt) -> int\n"
"\n"
"Returns the index of the display on which the given point lies, or\n"
"wxNOT_FOUND if the point is not on any connected display.");

extern "C" {static PyObject *meth_wxDisplay_GetFromPoint(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDisplay_GetFromPoint(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPoint* pt;
        int ptState = 0;

        static const char *sipKwdList[] = {
            sipName_pt,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1", sipType_wxPoint, &pt, &ptState))
        {
            int sipRes;

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxDisplay::GetFromPoint(*pt);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(pt),sipType_wxPoint,ptState);

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Display, sipName_GetFromPoint, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDisplay_GetFromWindow, "GetFromWindow(win) -> int\n"
"\n"
"Returns the index of the display on which the given window lies.");

extern "C" {static PyObject *meth_wxDisplay_GetFromWindow(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDisplay_GetFromWindow(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxWindow* win;

        static const char *sipKwdList[] = {
            sipName_win,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J8", sipType_wxWindow, &win))
        {
            int sipRes;

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxDisplay::GetFromWindow(win);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Display, sipName_GetFromWindow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxDisplay(void *, int);}
static void release_wxDisplay(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxDisplay *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxDisplay(sipSimpleWrapper *);}
static void dealloc_wxDisplay(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxDisplay(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxDisplay(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxDisplay(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxDisplay *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxDisplay();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        uint index;

        static const char *sipKwdList[] = {
            sipName_index,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "u", &index))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxDisplay(index);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxWindow* window;

        static const char *sipKwdList[] = {
            sipName_window,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8", sipType_wxWindow, &window))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxDisplay(window);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxDisplay[] = {
    {SIP_MLNAME_CAST(sipName_ChangeMode), SIP_MLMETH_CAST(meth_wxDisplay_ChangeMode), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDisplay_ChangeMode)},
    {SIP_MLNAME_CAST(sipName_GetClientArea), meth_wxDisplay_GetClientArea, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDisplay_GetClientArea)},
    {SIP_MLNAME_CAST(sipName_GetCount), meth_wxDisplay_GetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDisplay_GetCount)},
    {SIP_MLNAME_CAST(sipName_GetCurrentMode), meth_wxDisplay_GetCurrentMode, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDisplay_GetCurrentMode)},
    {SIP_MLNAME_CAST(sipName_GetFromPoint), SIP_MLMETH_CAST(meth_wxDisplay_GetFromPoint), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDisplay_GetFromPoint)},
    {SIP_MLNAME_CAST(sipName_GetFromWindow), SIP_MLMETH_CAST(meth_wxDisplay_GetFromWindow), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDisplay_GetFromWindow)},
    {SIP_MLNAME_CAST(sipName_GetGeometry), meth_wxDisplay_GetGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDisplay_GetGeometry)},
    {SIP_MLNAME_CAST(sipName_GetModes), SIP_MLMETH_CAST(meth_wxDisplay_GetModes), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDisplay_GetModes)},
    {SIP_MLNAME_CAST(sipName_GetName), meth_wxDisplay_GetName, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDisplay_GetName)},
    {SIP_MLNAME_CAST(sipName_GetPPI), meth_wxDisplay_GetPPI, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDisplay_GetPPI)},
    {SIP_MLNAME_CAST(sipName_IsPrimary), meth_wxDisplay_IsPrimary, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDisplay_IsPrimary)}
};

sipVariableDef variables_wxDisplay[] = {
    {PropertyVariable, sipName_Name, &methods_wxDisplay[8], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Geometry, &methods_wxDisplay[6], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_CurrentMode, &methods_wxDisplay[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ClientArea, &methods_wxDisplay[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxDisplay, "Display()\n"
"Display(index)\n"
"Display(window)\n"
"\n"
"Determines the sizes and locations of displays connected to the\n"
"system.");


sipClassTypeDef sipTypeDef__core_wxDisplay = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxDisplay,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_Display,
        {0, 0, 1},
        11, methods_wxDisplay,
        0, SIP_NULLPTR,
        4, variables_wxDisplay,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxDisplay,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxDisplay,
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
    dealloc_wxDisplay,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxDisplay,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};