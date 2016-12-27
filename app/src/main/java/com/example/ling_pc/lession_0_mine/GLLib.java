package com.example.ling_pc.lession_0_mine;

/**
 * Created by ling-pc on 2016/12/27.
 */

public class GLLib {
    /**
     * @param width the current view width
     * @param height the current view height
     */
    public static native void init(int width, int height);
    public static native void step();

    static {
        System.loadLibrary("gllib");
    }
}
